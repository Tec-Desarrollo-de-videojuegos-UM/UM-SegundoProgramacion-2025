// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E08_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE08_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE08_FBL();
	TArray<int32> Guerreros;
	int32 Rondas = 1;
	int32 VidaInicial = 100;
	
	UFUNCTION(BlueprintCallable, Category = "Ciclo")
	void Resultado ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
