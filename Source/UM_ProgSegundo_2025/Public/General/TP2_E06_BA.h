// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TP2_E06_BA.generated.h"

/**
 * 
 */
UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E06_BA : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void SetupInputComponent() override;
	
public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Possess")
	APawn* Character1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Possess")
	APawn* Character2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Possess")
	APawn* Character3;
	
private:
	void PossessCharacter1();
	void PossessCharacter2();
	void PossessCharacter3();
	
	void PossessPawn(APawn* PawnObjeto);
};

