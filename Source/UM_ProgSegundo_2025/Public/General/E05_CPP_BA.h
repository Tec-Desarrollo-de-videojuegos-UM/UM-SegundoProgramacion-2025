// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E05_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE05_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE05_CPP_BA();
	
	int32 MonedasOro;
	int32 MonedasPlata;
	int32 ValorTotal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
