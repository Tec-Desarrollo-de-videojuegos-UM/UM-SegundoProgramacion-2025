// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E01_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE01_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE01_CPP_BA();
	
	int32 Numero = 5;
	float A = 4.56f;
	FString C = TEXT("A");
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
