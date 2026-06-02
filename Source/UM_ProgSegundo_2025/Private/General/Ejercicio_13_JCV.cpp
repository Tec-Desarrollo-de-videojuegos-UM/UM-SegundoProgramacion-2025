// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_13_JCV.h"

// Sets default values
AEjercicio_13_JCV::AEjercicio_13_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_13_JCV::BeginPlay()
{
	Super::BeginPlay();
	CalcularDescuento("Marcos", true, FMath::RandRange(40,100), FMath::RandRange(60,100));

}


void AEjercicio_13_JCV::CalcularDescuento(FString NombreCliente, bool bEsMiembroGremio, int32 Nivel, int32 Reputacion)
{
	int32 Descuento = 0;
	bool bPuedeComprar = true;

	if (bEsMiembroGremio)
	{
		if (Nivel >= 50 && Reputacion >= 80)
		{
			Descuento = 50;
		}
		else if (Nivel >= 50 || Reputacion >= 80)
		{
			Descuento = 30;
		}
		else
		{
			Descuento = 0;
		}
	}
	else
	{
		if (Reputacion >= 70)
		{
			Descuento = 15;
		}
		else
		{
			bPuedeComprar = false;
		}
	}

	// Mostrar el mensaje correspondiente
	if (bPuedeComprar)
	{
		MostrarMensaje(FString::Printf(TEXT("Cliente: %s | Descuento aplicado: %d%%"), *NombreCliente, Descuento), FColor::Green);
		
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("Cliente: %s | Permiso denegado para comprar."), *NombreCliente), FColor::Green);
		
	}
}

void AEjercicio_13_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}


