// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E09_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE09_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE09_FBL();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreViajero="Juan";
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Caracteristica")
	int32 Monedas = 0;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
