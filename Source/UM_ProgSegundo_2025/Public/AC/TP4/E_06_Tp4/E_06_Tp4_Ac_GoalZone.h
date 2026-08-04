// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "E_06_Tp4_Ac_GoalZone.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE_06_Tp4_Ac_GoalZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE_06_Tp4_Ac_GoalZone();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Goal")
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Goal")
	bool bNivelCompletado;

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnGoalOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintImplementableEvent, Category="Goal")
	void EventoNivelCompletado();
};
