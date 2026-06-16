// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP2_E04_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E04_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E04_BA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Configuration")
	UStaticMesh* NewMesh;
	
	UPROPERTY(EditAnywhere, Category = "Configuration")
	UMaterialInterface* Material; 
	
private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* MeshComponent;
};
