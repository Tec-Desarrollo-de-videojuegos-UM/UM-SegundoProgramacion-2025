// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ciclos.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ACiclos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACiclos();
	
	
	
	int32 CantidadMaxima = 15;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
