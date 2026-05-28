// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E10_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE10_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE10_CPP_BA();
	
	FString ConstruirSaludo(const FString& NombreAventurero, int32 Nivel);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
