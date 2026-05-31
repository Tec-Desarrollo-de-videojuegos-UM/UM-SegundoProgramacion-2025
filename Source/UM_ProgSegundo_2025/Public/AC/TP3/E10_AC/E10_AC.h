// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E10_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE10_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE10_AC();
	FString construirSaludo(FString NombreAventurero, int32 Nivel);
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Yellow);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
