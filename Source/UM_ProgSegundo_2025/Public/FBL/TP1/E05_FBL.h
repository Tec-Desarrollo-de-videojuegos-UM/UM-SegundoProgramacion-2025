// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E05_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE05_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE05_FBL();
	
	int32 MonedasOro = 0;
	int32 MonedasPlata = 0;
	int32 ValorTolal = 0;
	
	UFUNCTION(BlueprintCallable, Category = "Ciclo")
	FString Ciclos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
