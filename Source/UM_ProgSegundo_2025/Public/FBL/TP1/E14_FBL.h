// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E14_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE14_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE14_FBL();
	UFUNCTION(BlueprintCallable, Category = "Categorías")
	FString ObtenerCategoria(int32 Fuerza, int32 Agilidad, int32 Magia, int32 Reputacion, bool EstaDescalificado);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
