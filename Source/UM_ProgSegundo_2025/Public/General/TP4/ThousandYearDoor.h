// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DisplayShow.h"
#include "Components/BoxComponent.h"
#include "General/TP4/InteractableActor.h"
#include "ThousandYearDoor.generated.h"

/**
 * 
 */
UCLASS()
class UM_PROGSEGUNDO_2025_API AThousandYearDoor : public AInteractableActor
{
	GENERATED_BODY()
	
public:
	AThousandYearDoor();
	
	virtual void Interactuar(AActor* Interactor) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UMeshComponent* MeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto en pantalla")
	TSubclassOf<UDisplayShow> WidgetClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto en pantalla")
	FText tSucceedMessage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto en pantalla")
	FText tFailedMessage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto en pantalla")
	FColor cSucceedColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Texto en pantalla")
	FColor cFailedColor;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactable")
	bool bIsOpen = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactable")
	bool bKeyRequired = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interactable")
	float AnguloApertura = 90;
	
private:
	bool CanBeOpen(AActor* Interactor);
	
	void OpenDoor();
	void MostrarMensaje(FText MensajeMostrar, FColor ColorMensaje);
	
	FRotator RotacionInicial;
	FRotator RotacionObjetivo;
	
	
	
protected:
	virtual void BeginPlay() override;
};
