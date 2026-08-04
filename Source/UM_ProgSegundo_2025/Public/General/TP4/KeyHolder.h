// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KeyHolder.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UKeyHolder : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UKeyHolder();
	
	UPROPERTY(VisibleAnywhere, Category="Variables")
	bool bHasKey = false;
	
	UFUNCTION(BlueprintCallable, Category="Variables")
	bool GetHasKey();
	
	UFUNCTION(BlueprintCallable, Category="Variables")	
	void SetKey(bool hasKey);

};
