// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "E05_TP2_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE05_TP2_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE05_TP2_FBL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform&Transform)override;

private:
	
	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	USceneComponent* Raiz;
	
	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UStaticMeshComponent* MeshComponent;
	
public:	
	UPROPERTY(EditAnywhere,Category ="Configuración")
	UStaticMesh* NewMesh;

	UPROPERTY(EditAnywhere,Category ="Configuración")
	UMaterialInterface* Material;
};
