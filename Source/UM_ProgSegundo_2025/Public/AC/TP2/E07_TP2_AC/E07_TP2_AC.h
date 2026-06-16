// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "E07_TP2_AC.generated.h"

/**
 * 
 */
UCLASS()
class UM_PROGSEGUNDO_2025_API AE07_TP2_AC : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Possess")
	APawn* Character1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Possess")
	APawn* Character2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Possess")
	APawn* Character3;

private:
	void PoseerCharacter1();
	void PoseerCharacter2();
	void PoseerCharacter3();

	void PoseerPawn(APawn* PawnObjetivo);
};
