// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/PointLight.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "E08_TP2_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE08_TP2_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE08_TP2_AC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* BotonMesh;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UBoxComponent* CajaColision;

	UFUNCTION()
	void AlComenzarOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

public:
	UPROPERTY(EditAnywhere, Category = "Luces")
	TArray<APointLight*> ArrayLuces;

private:
	void AlternarLuces();
};