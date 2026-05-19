// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E02_DP.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE02_DP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE02_DP();
	
	int32 Vida = 100;
	int32 Ataque = 35;
	int32 Defensa = 10;
	
	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
