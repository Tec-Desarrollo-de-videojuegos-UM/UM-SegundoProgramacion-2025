// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E_02_Ac.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE_02_Ac : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE_02_Ac();
	
	int32 Vida = 100;
	
	int32 Defensa = 10;
	
	int32 Ateque = 35;
	
	void MostrarMensajes(const FString Mensaje, FColor Color = FColor::Blue);
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
