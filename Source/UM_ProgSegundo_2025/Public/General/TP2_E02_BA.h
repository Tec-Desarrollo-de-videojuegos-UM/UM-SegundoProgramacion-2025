// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP2_E02_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E02_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E02_BA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Variable")
	bool Boolean = true;
	
	UPROPERTY(EditAnywhere, Category = "Variable")
	int32 Entero = 10;
	
	UPROPERTY(EditAnywhere, Category = "Variable")
	float Decimal = 5.5;
	
	UPROPERTY(EditAnywhere, Category = "Variable")
	FText Texto = FText::FromString(TEXT("Texto de ejemplo"));
	
	UPROPERTY(EditAnywhere, Category = "Variable")
	TArray<FString> ArrayFrutas;

};
