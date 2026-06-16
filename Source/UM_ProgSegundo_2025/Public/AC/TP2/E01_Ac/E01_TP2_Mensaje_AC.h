// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E01_TP2_Mensaje_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE01_TP2_Mensaje_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE01_TP2_Mensaje_AC();

protected:
	virtual void BeginPlay() override;

private:
	void MostrarMensaje(const FString& Mensaje, FColor Color = FColor::White);
};

