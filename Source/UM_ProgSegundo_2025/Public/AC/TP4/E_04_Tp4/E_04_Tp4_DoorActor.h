#pragma once

#include "CoreMinimal.h"
#include "AC/TP4/E_03_Tp4/E_03_tp4_ActorInteractuable.h"
#include "Components/StaticMeshComponent.h"
#include "E_04_Tp4_DoorActor.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE_04_Tp4_DoorActor : public AE_03_tp4_ActorInteractuable
{
	GENERATED_BODY()

public:
	AE_04_Tp4_DoorActor();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Puerta")
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puerta")
	bool bEstaAbierta;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puerta")
	bool bRequiereLlave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puerta")
	float AnguloApertura;

public:

	virtual void Interactuar_Implementation(AActor* Interactor) override;

	// Evento para Blueprint cuando la puerta se abre
	UFUNCTION(BlueprintImplementableEvent, Category = "Puerta")
	void EventoPuertaAbierta();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Puerta")
	void EventoPuertaBloqueada();

protected:

	bool PuedeAbrirse(AActor* Interactor);

	void AbrirPuerta();
};
