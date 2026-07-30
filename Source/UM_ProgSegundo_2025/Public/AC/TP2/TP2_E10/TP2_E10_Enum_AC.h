// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "TP2_TipoObjeto.h"
#include "TP2_E10_Enum_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E10_Enum_AC : public AActor
{
	GENERATED_BODY()

public:
	ATP2_E10_Enum_AC();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* MeshComponent;

public:
	UPROPERTY(EditAnywhere, Category = "Objeto")
	ETP2_TipoObjeto TipoDeObjeto = ETP2_TipoObjeto::Cubo;

	UPROPERTY(EditAnywhere, Category = "Objeto")
	UStaticMesh* MeshCubo;

	UPROPERTY(EditAnywhere, Category = "Objeto")
	UStaticMesh* MeshEsfera;

	UPROPERTY(EditAnywhere, Category = "Objeto")
	UStaticMesh* MeshCilindro;
};