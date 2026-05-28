// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E03_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE03_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE03_CPP_BA();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vida")
	int32 VidaEnemigo;
	
	void MostrarMensaje(const FString& mensaje, FColor color);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
