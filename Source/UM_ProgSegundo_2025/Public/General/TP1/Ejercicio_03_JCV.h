
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_03_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_03_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_03_JCV();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	int32 EnemyLife;
	
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};