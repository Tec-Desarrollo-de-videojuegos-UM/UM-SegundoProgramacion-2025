// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP4/ThousandYearDoor.h"

#include "General/E01_CPP_BA.h"
#include "General/TP4/KeyHolder.h"

AThousandYearDoor::AThousandYearDoor()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(RootComponent);
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(RootComponent);
}

void AThousandYearDoor::BeginPlay()
{
	Super::BeginPlay();
	
	RotacionInicial = MeshComponent->GetRelativeRotation();
}

void AThousandYearDoor::Interactuar(AActor* Interactor)
{
	AE01_CPP_BA::MostrarMensaje("interactuado", FColor::Yellow);
	if (bIsOpen)
	{
		return;
	}
	if (CanBeOpen(Interactor))
	{
		OpenDoor();
		MostrarMensaje(tSucceedMessage, cSucceedColor);
	}
	else
	{
		MostrarMensaje(tFailedMessage, cFailedColor);
	}
	
}

bool AThousandYearDoor::CanBeOpen(AActor* Interactor)
{
	if (!bKeyRequired)
	{
		return true;
	}
	UKeyHolder* KeyHolder = Interactor->FindComponentByClass<UKeyHolder>();
	if (KeyHolder)
	{
		if (KeyHolder->GetHasKey())
		{
			return true;
		}
		return false;
	}
	return false;
}
void AThousandYearDoor::OpenDoor()
{
	if (bIsOpen)
	{
		return;
	}
	bIsOpen = true;
	RotacionObjetivo = RotacionInicial;
	RotacionObjetivo.Yaw =+ AnguloApertura;
	MeshComponent->SetRelativeRotation(RotacionObjetivo);
}

void AThousandYearDoor::MostrarMensaje(FText MensajeMostrar, FColor ColorMesaje)
{
	UDisplayShow* Widget = CreateWidget<UDisplayShow>(GetWorld(), WidgetClass);
	if (Widget)
	{
		Widget->DisplayMessage = MensajeMostrar;
		Widget->ColorMessage = ColorMesaje;
		Widget->AddToViewport();
	}
}
