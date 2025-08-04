// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerSettings.generated.h"

UCLASS(Config = ServerSettings)
class DEDICATEDSERVER_API UServerSettings : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    FString ServerName;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    FString MapName;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    FString Password;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    FString Region;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    int32 MaxPlayers;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    bool PasswordProtected;

    UPROPERTY(Config, BlueprintReadOnly, Category = "Server")
    bool ShouldAdvertise;

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static FString GetServerName()
    {
        return GetMutableDefault<UServerSettings>()->ServerName;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static FString GetMapName()
    {
        return GetMutableDefault<UServerSettings>()->MapName;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static FString GetPassword()
    {
        return GetMutableDefault<UServerSettings>()->Password;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static FString GetRegion()
    {
        return GetMutableDefault<UServerSettings>()->Region;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static int32 GetMaxPlayers()
    {
        return GetMutableDefault<UServerSettings>()->MaxPlayers;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static bool IsPasswordProtected()
    {
        return GetMutableDefault<UServerSettings>()->PasswordProtected;
    }

    UFUNCTION(BlueprintPure, Category = "Server Config")
    static bool GetShouldAdvertise()
    {
        return GetMutableDefault<UServerSettings>()->ShouldAdvertise;

    }

    virtual void PostInitProperties() override;
};
