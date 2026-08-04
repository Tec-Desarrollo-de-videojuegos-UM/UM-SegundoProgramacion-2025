// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DisplayShow.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"
#include "GoalZone.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AGoalZone : public AActor
{
	GENERATED_BODY()
	
protected:
	
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this actor's properties
	AGoalZone();
	
	
	
	UPROPERTY(EditAnywhere, Category = "Goal")
	bool bNivelCompleto = false;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Texto en pantalla")
	TSubclassOf<UDisplayShow> WidgetClass;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Texto en pantalla")
	FText DisplayMessage;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Texto en pantalla")
	FColor ColorMessage;
	
private:	
	
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UBoxComponent* Colision;
	
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UBillboardComponent* Billboard;
	
	UFUNCTION()
	void OnOverlapSomething(UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor,
		UPrimitiveComponent* OtherOverlappedComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
