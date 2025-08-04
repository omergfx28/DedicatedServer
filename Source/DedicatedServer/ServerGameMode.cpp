// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerGameMode.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Kismet/GameplayStatics.h"
#include "ServerSettings.h"

void AServerGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
    Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

    FString EnteredPassword = UGameplayStatics::ParseOption(Options, TEXT("Password"));
    UE_LOG(LogTemp, Warning, TEXT("PreLogin Options: %s"), *Options);

    IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get();
    if (!OnlineSub)
    {
        UE_LOG(LogTemp, Warning, TEXT("OnlineSubsystem not found!"));
        return;
    }

    IOnlineSessionPtr SessionInterface = OnlineSub->GetSessionInterface();
    if (!SessionInterface.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("Session Interface is not valid!"));
        return;
    }

    FNamedOnlineSession* Session = SessionInterface->GetNamedSession(NAME_GameSession);
    if (!Session)
    {
        UE_LOG(LogTemp, Warning, TEXT("Session not found!"));
        return;
    }

    FOnlineSessionSettings TempSessionSettings = Session->SessionSettings;

    bool bIsPasswordProtected = false;
    TempSessionSettings.Get(TEXT("PasswordProtected"), bIsPasswordProtected);

    FString ServerPassword;
    ServerPassword = UServerSettings::GetPassword();

    if (bIsPasswordProtected && !ServerPassword.IsEmpty())
    {
        if (ServerPassword != EnteredPassword)
        {
            ErrorMessage = TEXT("Incorrect password.");
            FGameModeEvents::GameModePreLoginEvent.Broadcast(this, UniqueId, ErrorMessage);
            UE_LOG(LogTemp, Warning, TEXT("Entered password is not correct, player prelogin failed!"));
            return;
        }
    }
}