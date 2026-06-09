
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "E05_TP2_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE05_TP2_AC : public AActor
{
	GENERATED_BODY()

public:
	AE05_TP2_AC();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* MeshComponent;

public:
	UPROPERTY(EditAnywhere, Category = "Configuración")
	UStaticMesh* NewMesh;

	UPROPERTY(EditAnywhere, Category = "Configuración")
	UMaterialInterface* Material;
};