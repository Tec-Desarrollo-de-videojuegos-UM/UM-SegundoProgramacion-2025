// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "E02_TP2_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE02_TP2_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE02_TP2_FBL();

	virtual void OnConstruction(const FTransform& Transform) override;


private:

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* Raiz; 

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UTextRenderComponent* TextoFlotante;

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Genaral")
	FText TextoMensaje = FText::FromString(TEXT("Hola"));

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Genaral")
	FColor ColorMensaje = FColor::Blue;


};
