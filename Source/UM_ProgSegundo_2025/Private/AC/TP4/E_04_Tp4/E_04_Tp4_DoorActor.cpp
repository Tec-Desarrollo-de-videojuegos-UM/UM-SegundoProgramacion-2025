// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP4/E_04_Tp4/E_04_Tp4_DoorActor.h"
#include "Components/StaticMeshComponent.h"
#include "AC/TP4/E_01/E_01_Ac_UKeyHolderComponent.h"

AE_04_Tp4_DoorActor::AE_04_Tp4_DoorActor()
{
	PrimaryActorTick.bCanEverTick = false;

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	bEstaAbierta = false;
	bRequiereLlave = true;
	AnguloApertura = 90.0f;
}

void AE_04_Tp4_DoorActor::Interactuar_Implementation(AActor* Interactor)
{
	if (bEstaAbierta)
	{
		return;
	}

	if (PuedeAbrirse(Interactor))
	{
		AbrirPuerta();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("La puerta está cerrada. Necesitas una llave."));
	}
}

bool AE_04_Tp4_DoorActor::PuedeAbrirse(AActor* Interactor)
{
	// Si no requiere llave, se abre directamente.
	if (!bRequiereLlave)
	{
		return true;
	}

	// Si el actor que interactúa no es válido.
	if (Interactor == nullptr)
	{
		return false;
	}

	// Buscar el componente de llave en el jugador.
	UE_01_Ac_UKeyHolderComponent* KeyHolder =
		Interactor->FindComponentByClass<UE_01_Ac_UKeyHolderComponent>();

	if (KeyHolder == nullptr)
	{
		return false;
	}

	// Devolver si el jugador tiene la llave.
	return KeyHolder->TieneLlave();
}

void AE_04_Tp4_DoorActor::AbrirPuerta()
{
	if (bEstaAbierta)
	{
		return;
	}

	bEstaAbierta = true;

	SetActorRotation(FRotator(0.f, AnguloApertura, 0.f));

	// Llama al Blueprint
	EventoPuertaAbierta();
}





