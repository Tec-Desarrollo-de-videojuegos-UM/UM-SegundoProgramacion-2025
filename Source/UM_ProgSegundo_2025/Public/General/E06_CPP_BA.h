// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E06_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE06_CPP_BA();
	
	FString Guerrero1 = "Borys";
	FString Guerrero2 = "Angel";
	FString Guerrero3 = "Adrian";
	FString Guerrero4 = "Fernando";
	FString Guerrero5 = "Santiago";
	
	TArray<FString> Guerreros;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
