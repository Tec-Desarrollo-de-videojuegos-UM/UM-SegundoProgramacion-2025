// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E15_1_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE15_1_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE15_1_AC();
	
	int32 A = 1;
	int32 B = 2;
	int32 C = 3;
	int32 D = 4;

	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Green);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
