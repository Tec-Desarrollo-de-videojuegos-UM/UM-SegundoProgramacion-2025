// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E07_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE07_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE07_AC();
	
	int32 Contador = 10;
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Green);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
