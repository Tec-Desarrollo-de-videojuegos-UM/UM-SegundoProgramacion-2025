// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractComponent();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	float DistanciaInteraccion;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	bool bDibujarDebug;
	
	UFUNCTION(BlueprintCallable, Category = "Interactable")
	void IntentarInteractuar(AActor* Interactor);
		
};
