// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "TP2_E05_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E05_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E05_BA();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	
private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UNiagaraComponent* EfectoExplosion;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UAudioComponent* SonidoExplosion;
	
};
