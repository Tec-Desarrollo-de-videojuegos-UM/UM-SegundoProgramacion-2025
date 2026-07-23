// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP2_ENUM.h"
#include "GameFramework/Actor.h"
#include "TP2_E10_10.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E10_10 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E10_10();

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UStaticMeshComponent* MeshComponent;
public:
	UPROPERTY(EditAnywhere,Category ="Objeto")
	ETP2_ENUM TipoDeObjeto = ETP2_ENUM::Cubo;

	UPROPERTY(EditAnywhere,Category ="Objeto")
	UStaticMesh* MeshCubo;

	UPROPERTY(EditAnywhere,Category ="Objeto")
	UStaticMesh* MeshEsfera;

	UPROPERTY(EditAnywhere,Category ="Objeto")
	UStaticMesh* MeshCilindro;
};
