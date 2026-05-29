// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_05_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_05_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_05_JCV();
	int32 MonedasOro = 0;
	int32 MonedasPlata = 0;
	int32 ValorTotal = 0;
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
