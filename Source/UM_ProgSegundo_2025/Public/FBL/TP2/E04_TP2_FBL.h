// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E04_TP2_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE04_TP2_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE04_TP2_FBL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere,Category ="Ataque",meta = (ClampMin ="1",ClampMax ="10"))
	int32 Poder =5;
	
private:
	int32 CalcularAtaque(int32 CantidadDePoder);
	
	void MostrarMensaje(const FString& Mensaje,FColor Color = FColor::White);
};
