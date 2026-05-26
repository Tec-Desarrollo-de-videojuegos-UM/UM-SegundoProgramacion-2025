// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E04_AlejoAguilar.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE04_AlejoAguilar : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE04_AlejoAguilar();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Stats")
	int32 numero = 1;

	void MostrarNumero(const FString& Mensaje, FColor Color = FColor::White);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
