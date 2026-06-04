// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "TP2_E01_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E01_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E01_BA();
	
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UTextRenderComponent* Texto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
