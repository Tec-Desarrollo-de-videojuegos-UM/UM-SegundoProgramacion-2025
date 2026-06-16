// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E04_TP2_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE04_TP2_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE04_TP2_AC();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Ataque", meta = (ClampMin = "1", ClampMax = "10"))
	int32 Poder = 5;

private:
	int32 CalcularAtaque(int32 CantidadDePoder);

	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);
};
