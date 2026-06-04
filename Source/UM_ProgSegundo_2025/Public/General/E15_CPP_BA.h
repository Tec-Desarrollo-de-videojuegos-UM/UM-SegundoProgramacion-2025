// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "E15_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE15_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE15_CPP_BA();
	
	//E15.1
	int32 A = 1;
	int32 B = 2;
	int32 C = 3;
	int32 D = 4;
	
	//E15.2
	int32 Numero = 1;
	
	//E15.3
	int32 Numero2 = 2;
	
	//E15.4
	int32 Dia = 12;
	int32 Mes = 7;
	int32 Anio = 1980;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
