// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP4/E_05_Tp4/E_05_Tp4_Ac_InteractionComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "AC/TP4/E_03_Tp4/E_03_tp4_ActorInteractuable.h"

// Sets default values for this component's properties
UE_05_Tp4_Ac_InteractionComponent::UE_05_Tp4_Ac_InteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	DistanciaInteraccion = 300.f;
	bDibujarDebug = true;
}

void UE_05_Tp4_Ac_InteractionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UE_05_Tp4_Ac_InteractionComponent::IntentarInteractuar()
{
	AActor* Owner = GetOwner();

	if (Owner == nullptr)
	{
		return;
	}

	FVector Inicio = Owner->GetActorLocation();
	FVector Fin = Inicio + (Owner->GetActorForwardVector() * DistanciaInteraccion);

	FHitResult Hit;

	bool bGolpeo = GetWorld()->LineTraceSingleByChannel(Hit,Inicio,Fin,ECC_Visibility);

	if (bDibujarDebug)
	{
		DrawDebugLine(GetWorld(),Inicio,Fin,bGolpeo ? FColor::Green : FColor::Red,
			false,2.f,0,2.f);
	}

	if (!bGolpeo)
	{
		return;
	}

	AE_03_tp4_ActorInteractuable* Objeto = Cast<AE_03_tp4_ActorInteractuable>(Hit.GetActor());

	if (Objeto)
	{
		Objeto->Interactuar(Owner);
	}
}
