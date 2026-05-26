// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E03_AlejoAguilar.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE03_AlejoAguilar : public AActor
{
	GENERATED_BODY()
	
public:	
	AE03_AlejoAguilar();
	
	int32 vidaEnemigo = 50;
	
	void MostrarVida(const FString& Mensaje, FColor Color = FColor::White);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
