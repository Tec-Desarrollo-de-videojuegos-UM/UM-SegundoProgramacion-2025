// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Vitalidad.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UVitalidad : public UActorComponent
{
	GENERATED_BODY()

public:	

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Stats")
	int32 VidaMaxima = 100;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Stats")
	float Poder = 1000.0f;
	
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void RecibirDamage(int32 Damage);

	UFUNCTION(BlueprintCallable, Category = "Stats")
	FString RecibirDamageMensaje(int32 Damage);
	
	

	
	
	
	
	
	
protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category="Stats")
	int32 Vida;
	
	
	
	
	
};
