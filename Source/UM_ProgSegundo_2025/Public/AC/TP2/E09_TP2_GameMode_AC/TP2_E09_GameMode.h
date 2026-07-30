// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TP2_E09_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E09_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATP2_E09_GameMode();
protected:
	virtual void BeginPlay() override;
};
