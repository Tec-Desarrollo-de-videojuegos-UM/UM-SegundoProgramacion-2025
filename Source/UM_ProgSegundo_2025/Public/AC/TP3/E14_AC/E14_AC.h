// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E14_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE14_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE14_AC();
	
	FString NombreCampeon = TEXT("Aragon");
	
	FString ObtenerCategoria(
		int32 Fuerza,
		int32 Agilidad,
		int32 Magia,
		int32 Reputacion,
		bool EstaDescalificado);

	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Green);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
