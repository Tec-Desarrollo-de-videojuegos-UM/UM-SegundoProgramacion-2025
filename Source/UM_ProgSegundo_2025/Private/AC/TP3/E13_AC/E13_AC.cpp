
// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E13_AC/E13_AC.h"

// Sets default values
AE13_AC::AE13_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE13_AC::BeginPlay()
{
	Super::BeginPlay();
	if (EsMiembroGremio)
	{
		if (Nivel >= 50 && Reputacion >= 80)
		{
			MostrarMensaje(FString::Printf(TEXT("%s recibe un descuento del 50%%."),*NombreCliente),
				FColor::Green);
		}
		else if (Nivel >= 50 || Reputacion >= 80)
		{
			MostrarMensaje(FString::Printf(TEXT("%s recibe un descuento del 30%%."),*NombreCliente)
				,FColor::Yellow);
		}
		else
		{
			MostrarMensaje(FString::Printf(TEXT("%s no recibe descuento."),*NombreCliente),FColor::White);
		}
	}
	else
	{
		if (Reputacion >= 70)
		{
			MostrarMensaje(FString::Printf(TEXT("%s recibe un descuento del 15%%."),*NombreCliente),
				FColor::Blue);
		}
		else
		{
			MostrarMensaje(FString::Printf(TEXT("%s no puede comprar en la tienda."),*NombreCliente),
				FColor::Red);
		}
	}
	
}
void AE13_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}

// Called every frame
void AE13_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

