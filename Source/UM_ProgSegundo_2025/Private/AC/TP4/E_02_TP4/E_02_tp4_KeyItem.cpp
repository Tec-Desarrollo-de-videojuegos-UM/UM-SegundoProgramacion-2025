// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP4/E_02_TP4/E_02_tp4_KeyItem.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"

#include "AC/TP4/E_01/E_01_Ac_UKeyHolderComponent.h"

AE_02_tp4_KeyItem::AE_02_tp4_KeyItem()
{
	PrimaryActorTick.bCanEverTick = false;

	// Colisión
	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = Collision;

	// Malla
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	bFueRecolectada = false;
}

void AE_02_tp4_KeyItem::BeginPlay()
{
	Super::BeginPlay();

	Collision->OnComponentBeginOverlap.AddDynamic(this, &AE_02_tp4_KeyItem::OnKeyOverlap);
}

void AE_02_tp4_KeyItem::OnKeyOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (bFueRecolectada)
	{
		return;
	}

	if (!OtherActor)
	{
		return;
	}

	ACharacter* Player = Cast<ACharacter>(OtherActor);

	if (!Player)
	{
		return;
	}

	UE_01_Ac_UKeyHolderComponent* KeyComponent =
		Player->FindComponentByClass<UE_01_Ac_UKeyHolderComponent>();

	if (!KeyComponent)
	{
		return;
	}

	// Entregar la llave al jugador
	KeyComponent->RecibirLlave();

	// Marcar como recolectada
	bFueRecolectada = true;

	// Evento para Blueprint
	AlRecolectarLlave();
	
	Destroy();
}

