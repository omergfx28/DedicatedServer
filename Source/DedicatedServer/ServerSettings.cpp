// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerSettings.h"

void UServerSettings::PostInitProperties()
{
    Super::PostInitProperties();

    UE_LOG(LogTemp, Log, TEXT("Loaded Server Settings From ServerSettings.ini;"));
    UE_LOG(LogTemp, Log, TEXT("ServerName: %s"), *ServerName);
    UE_LOG(LogTemp, Log, TEXT("MapName: %s"), *MapName);
    UE_LOG(LogTemp, Log, TEXT("Password: %s"), *Password);
    UE_LOG(LogTemp, Log, TEXT("Region: %s"), *Region);
    UE_LOG(LogTemp, Log, TEXT("MaxPlayers: %d"), MaxPlayers);
    UE_LOG(LogTemp, Log, TEXT("PasswordProtected: %s"), PasswordProtected ? TEXT("True") : TEXT("False"));
    UE_LOG(LogTemp, Log, TEXT("ShouldAdvertise: %s"), ShouldAdvertise ? TEXT("True") : TEXT("False"));
}