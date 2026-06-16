// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "TP2_E01_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API ATP2_E01_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATP2_E01_BA();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UTextRenderComponent* Texto;
	
public:
	UPROPERTY(EditAnywhere, Category = "Mensaje")
	FText TextoDelMensaje = FText::FromString(TEXT("Hola Mundo"));
	
	UPROPERTY(EditAnywhere, Category = "Mensaje")
	FColor Color = FColor::Blue;
	
};
