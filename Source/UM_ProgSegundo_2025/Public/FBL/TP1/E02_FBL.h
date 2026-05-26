// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E02_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE02_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE02_FBL();
	
	int32 vida = 100;
	int32 ataque= 35;
	int32 defensa= 10;
	
	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
