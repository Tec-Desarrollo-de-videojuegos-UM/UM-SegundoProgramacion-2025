// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E06_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE06_AC();
	TArray<FString> Guerreros;
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Black);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
