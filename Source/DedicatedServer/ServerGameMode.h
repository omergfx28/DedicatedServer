// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ServerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DEDICATEDSERVER_API AServerGameMode : public AGameMode
{
	GENERATED_BODY()
	
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
};
