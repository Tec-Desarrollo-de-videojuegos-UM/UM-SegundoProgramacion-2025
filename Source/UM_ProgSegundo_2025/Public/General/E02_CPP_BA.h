// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E02_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE02_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE02_CPP_BA();
	
	int32 Vida = 100;
	int32 Ataque = 35;
	int32 Defensa = 10;
	
	int32 CalcularDamageEfectivo(int32 ataque, int32 defensa)
	{
		int32 efectiveDamage = ataque - defensa;
		return efectiveDamage;
	}
	int32 CalcularVidaFinal(int32 vida, int32 efectiveDamage)
	{
		int32 vidaFinal = vida - efectiveDamage;
		return vidaFinal;
	}
	void MostrarMensaje(const FString& Mensaje, FColor Color);	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
