// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_02_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_02_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_02_JCV();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	int32 Life = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	int32 Attack = 35;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	int32 Defense = 10;
	
	
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
