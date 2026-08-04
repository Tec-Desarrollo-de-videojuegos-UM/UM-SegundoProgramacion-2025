// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DisplayShow.generated.h"

/**
 * 
 */
UCLASS()
class UM_PROGSEGUNDO_2025_API UDisplayShow : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto")
	FText DisplayMessage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto")
	FColor ColorMessage;
	
};
