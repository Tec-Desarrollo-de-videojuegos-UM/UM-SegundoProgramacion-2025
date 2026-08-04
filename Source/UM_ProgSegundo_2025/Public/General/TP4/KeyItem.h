// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DisplayShow.h"
#include "NiagaraSystem.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "KeyItem.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AKeyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyItem();
	
protected:
	virtual void BeginPlay();
	
private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* CajaColision;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UMeshComponent* Mesh;
	
	
	
	UFUNCTION()
	void HideKey();
	
	UFUNCTION()
	void OnOverlapSomething(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherOverlappedComponent,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
	
public:
	UPROPERTY(VisibleAnywhere, Category = "Variables")
	bool bAlreadyCollected;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Modificables")
	TSubclassOf<UDisplayShow> DisplayMessageClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Modificables")
	FText tCollectMessage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Modificables")
	FColor cColorMessage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Modificables")
	USoundBase* sCollectSound;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Modificables")
	UNiagaraSystem* nCollectEffect;


};
