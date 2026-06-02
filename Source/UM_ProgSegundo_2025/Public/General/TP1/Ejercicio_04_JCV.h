// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_04_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_04_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_04_JCV();
	int32 Number;

	void MostrarMensaje(const FString& Mensaje, FColor Color);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};