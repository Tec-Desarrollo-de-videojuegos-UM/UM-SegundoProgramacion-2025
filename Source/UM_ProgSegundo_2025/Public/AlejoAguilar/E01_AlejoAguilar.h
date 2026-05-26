// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E01_AlejoAguilar.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE01_AlejoAguilar : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AE01_AlejoAguilar();
	
	int32 A = 5; 
	float B = 4.56f;
	FString C = TEXT("A");
	
	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
