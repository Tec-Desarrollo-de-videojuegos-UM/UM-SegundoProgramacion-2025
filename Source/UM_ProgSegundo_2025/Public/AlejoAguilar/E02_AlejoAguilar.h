// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E02_AlejoAguilar.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE02_AlejoAguilar : public AActor
{
	GENERATED_BODY()
	
public:	
	AE02_AlejoAguilar();
	
	int32 vida = 100;
	int32 ataque = 35;
	int32 defensa = 10;
	int32 danioEfectivo = ataque - defensa;
	
	void DañoEfectivo(const FString& Mensaje, FColor Color = FColor::White);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
