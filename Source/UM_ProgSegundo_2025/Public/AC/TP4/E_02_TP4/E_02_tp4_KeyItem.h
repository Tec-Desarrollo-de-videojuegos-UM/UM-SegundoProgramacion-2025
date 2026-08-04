// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E_02_tp4_KeyItem.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class UM_PROGSEGUNDO_2025_API AE_02_tp4_KeyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE_02_tp4_KeyItem();

protected:
	virtual void BeginPlay() override;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

	// Colisión
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* Collision;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bFueRecolectada;

	// Evento de Overlap
	UFUNCTION()
	void OnKeyOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	// Evento para Blueprint
	UFUNCTION(BlueprintImplementableEvent, Category="Llave")
	void AlRecolectarLlave();
};
