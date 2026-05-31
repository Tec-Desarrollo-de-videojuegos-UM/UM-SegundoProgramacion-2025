// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E13_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE13_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE13_AC();
	
	
	FString NombreCliente = TEXT("Aragon");
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool EsMiembroGremio = true;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Nivel = 55;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Reputacion = 85;
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Green);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
