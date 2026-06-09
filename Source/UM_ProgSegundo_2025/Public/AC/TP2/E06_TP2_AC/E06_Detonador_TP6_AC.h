
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Engine/TargetPoint.h"
#include"Components/StaticMeshComponent.h"
#include"Components/BoxComponent.h"
#include "E06_Explocion_TP2_AC.h"
#include "E06_Detonador_TP6_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_Detonador_TP6_AC : public AActor
{
	GENERATED_BODY()
	
public:	

	AE06_Detonador_TP6_AC();
protected:
	virtual void BeginPlay()override;
	virtual void OnConstruction(const FTransform&Transform)override;

private:
	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	USceneComponent* Raiz;

	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UStaticMeshComponent* BotonMesh;

	UPROPERTY(VisibleAnywhere,Category ="Componentes")
	UBoxComponent* CajaColision;

	UFUNCTION()
	void AlComenzarOverlap(
	UPrimitiveComponent*OverlappedComponent,AActor*OtherActor,
	UPrimitiveComponent*OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

public:
	UPROPERTY(EditAnywhere,Category ="Explosion")
	TSubclassOf<AE06_Explocion_TP2_AC> ClaseExplosion;

	UPROPERTY(EditAnywhere,Category ="Explosion")
	bool bExplotarASiMismo =false;

	UPROPERTY(EditAnywhere,Category ="Explosion")
	bool bExplotarTodo =false;

	UPROPERTY(EditAnywhere,Category ="Explosion")
	ATargetPoint* UbicacionExplosion;

	UPROPERTY(EditAnywhere,Category ="Explosion")
	float LaunchVelocityZ =800.0f;

private:
	void SpawnearExplosionEnTransform(const FTransform& Transform);
	void SpawnearExplosionEnLocation(const FVector& Location);

};
