// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_11_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_11_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_11_JCV();
	bool TieneLlave = true;	
	bool EstaMaldito = false;
	FString NombreJugador;
	void MostrarMensaje(const FString& Mensaje, FColor Color);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
