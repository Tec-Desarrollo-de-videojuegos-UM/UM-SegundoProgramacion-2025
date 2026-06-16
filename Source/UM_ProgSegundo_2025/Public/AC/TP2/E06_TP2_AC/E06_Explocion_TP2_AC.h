// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"
#include "NiagaraComponent.h"
#include "E06_Explocion_TP2_AC.generated.h"


UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_Explocion_TP2_AC : public AActor
{
	GENERATED_BODY()

public:
	AE06_Explocion_TP2_AC();

private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UNiagaraComponent* EfectoExplosion;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UAudioComponent* SonidoExplosion;
};
