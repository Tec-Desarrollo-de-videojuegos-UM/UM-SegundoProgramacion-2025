// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E03_TP2_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE03_TP2_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE03_TP2_FBL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, Category = "Variables")
	bool Boolean = true;

	UPROPERTY(EditAnywhere, Category = "Variables")
	int32 Entero = 10;

	UPROPERTY(EditAnywhere, Category = "Variables")
	float Decimal = 5.5f;

	UPROPERTY(EditAnywhere, Category = "Variables")
	FText Texto = FText::FromString(TEXT("Texto de ejemplo"));

	UPROPERTY(EditAnywhere, Category = "Variables")
	TArray<FString> ArrayFrutas;
private:
	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);
};
