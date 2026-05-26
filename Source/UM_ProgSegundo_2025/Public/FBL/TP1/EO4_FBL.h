// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EO4_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEO4_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEO4_FBL();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Random")
	int32 numeroRandom;
	
	UFUNCTION(BlueprintCallable, Category = "Random")
	FString ParoImpar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
