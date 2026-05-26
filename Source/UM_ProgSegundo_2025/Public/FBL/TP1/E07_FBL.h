// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E07_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE07_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE07_FBL();
	
	int32 contador = 10;
	
	UFUNCTION(BlueprintCallable, Category = "Nombres")
	void Ciclo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
