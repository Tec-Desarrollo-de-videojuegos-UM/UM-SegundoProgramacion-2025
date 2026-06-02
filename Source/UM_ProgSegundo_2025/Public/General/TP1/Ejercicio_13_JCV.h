// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_13_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_13_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	AEjercicio_13_JCV();

	void CalcularDescuento(FString NombreCliente, bool bEsMiembroGremio, int32 Nivel, int32 Reputacion);
	void MostrarMensaje(const FString& Mensaje, FColor Color);
	

protected:
	virtual void BeginPlay() override;
};