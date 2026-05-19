// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AItemActor.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AAItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAItemActor();
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Propiedades")
	FString NombreItem;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Propiedades")
	float Cantidad = 100.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
