// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP2_E03_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E03_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E03_BA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category  = "Ataque", meta = (ClampMin = "1", ClampMax = "10"))
	int32 Poder = 5;
private:
	int32 CalcularAtaque(int32 CantidadDePoder);
};
