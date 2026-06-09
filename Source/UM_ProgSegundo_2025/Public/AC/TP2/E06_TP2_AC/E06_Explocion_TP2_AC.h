// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraCommon.h"
#include"Components/AudioComponent.h"
#include "E06_Explocion_TP2_AC.generated.h"


UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_Explocion_TP2_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE06_Explocion_TP2_AC();

private:
	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UNiagaraComponent* EfectoExplosion;

	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UAudioComponent* SonidoExplosion;

};
