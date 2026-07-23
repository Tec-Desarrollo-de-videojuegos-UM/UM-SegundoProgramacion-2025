// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/PointLight.h"
#include "GameFramework/Actor.h"
#include "TP2_E08_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E08_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E08_BA();

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
		UPrimitiveComponent* OtherOverlappedComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Luces")
	TArray<APointLight*> ArrayLuces;

private:
	void AlternarLuces();
};
