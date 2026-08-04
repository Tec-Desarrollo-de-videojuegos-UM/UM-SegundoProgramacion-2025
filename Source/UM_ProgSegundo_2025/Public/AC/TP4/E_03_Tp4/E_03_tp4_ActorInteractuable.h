// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E_03_tp4_ActorInteractuable.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE_03_tp4_ActorInteractuable : public AActor
{
	GENERATED_BODY()

public:
	AE_03_tp4_ActorInteractuable();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interacción")
	void Interactuar(AActor* Interactor);
	virtual void Interactuar_Implementation(AActor* Interactor);



};
