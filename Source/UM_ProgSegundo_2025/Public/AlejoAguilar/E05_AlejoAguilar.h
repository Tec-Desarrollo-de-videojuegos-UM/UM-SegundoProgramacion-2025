// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E05_AlejoAguilar.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE05_AlejoAguilar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE05_AlejoAguilar();
	int32 monedaOro = 0; 
	int32 monedaPlata = 0; 
	int32 valorTotal = 0; 

	void MostrarNumero(const FString& Mensaje, FColor Color = FColor::White);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
