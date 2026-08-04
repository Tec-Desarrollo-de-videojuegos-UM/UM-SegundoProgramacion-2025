// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableActor.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();
	
	UFUNCTION(BlueprintCallable, Category = "Components|Interactable")
	virtual void Interactuar(AActor* Interactor);

	
};
