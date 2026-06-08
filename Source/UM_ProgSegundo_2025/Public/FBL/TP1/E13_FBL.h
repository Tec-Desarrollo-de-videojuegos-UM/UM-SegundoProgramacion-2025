// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E13_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE13_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE13_FBL();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreCliente;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	bool EsMiembroGremio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 Nivel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 Reputacion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
