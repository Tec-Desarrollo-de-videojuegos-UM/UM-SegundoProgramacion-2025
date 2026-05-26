// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E03_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE03_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE03_AC();
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 VidaEnemigos = 50;
	
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::White);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
