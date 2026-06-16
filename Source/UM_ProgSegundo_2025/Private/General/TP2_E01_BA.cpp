// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E01_BA.h"

// Sets default values
ATP2_E01_BA::ATP2_E01_BA()
{
 	PrimaryActorTick.bCanEverTick = false;
	
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	
	Texto = CreateDefaultSubobject<UTextRenderComponent>("Texto");
	Texto->SetupAttachment(Root);
	
	Texto->SetRelativeLocation(FVector(0, 0, 150));
	Texto->SetHorizontalAlignment(EHTA_Center);
	Texto->SetWorldSize(80);

}

void ATP2_E01_BA::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	if (Texto)
	{
		Texto->SetText(TextoDelMensaje);
		Texto->SetTextRenderColor(Color);
		
	}
}


