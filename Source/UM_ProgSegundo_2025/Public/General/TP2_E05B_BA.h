// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP2_E05_BA.h"
#include "Components/BoxComponent.h"
#include "Engine/TargetPoint.h"
#include "TP2_E05B_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E05B_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E05B_BA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	UPROPERTY(VisibleAnywhere, Category = "Explosion")
	TSubclassOf<ATP2_E05_BA> ClaseExplosion;
	
	UPROPERTY(VisibleAnywhere, Category = "Explosion")
	bool bExplotarAsiMismo = false;
	
	UPROPERTY(VisibleAnywhere, Category = "Explosion")
	bool bExplotarTodo = false;
	
	UPROPERTY(EditAnywhere, Category = "Explosion")
	ATargetPoint* UbicacionExplosion;
	
	UPROPERTY(EditAnywhere, Category = "Explosion")
	float LaunchVelocityZ = 800.0f;
private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* BotonMesh;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UBoxComponent* CajaColision;
	
	UFUNCTION()
	void AlComenzarOverLap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherOverlappedComponent,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
	);
	
	void SpawnearExplosionEnTransform(const FTransform& Transform);
	void SpawnearExplosionEnLocation(const FVector& Location);
};
