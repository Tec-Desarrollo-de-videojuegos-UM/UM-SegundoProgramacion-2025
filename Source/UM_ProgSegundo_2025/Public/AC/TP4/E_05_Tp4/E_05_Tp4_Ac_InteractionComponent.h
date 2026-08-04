// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "E_05_Tp4_Ac_InteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UE_05_Tp4_Ac_InteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UE_05_Tp4_Ac_InteractionComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interacción")
	float DistanciaInteraccion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interacción")
	bool bDibujarDebug;

public:

	UFUNCTION(BlueprintCallable, Category="Interacción")
	void IntentarInteractuar();
};
