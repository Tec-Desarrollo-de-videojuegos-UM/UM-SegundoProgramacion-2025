// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E13_CPP_BA.h"
#include "General/E01_CPP_BA.h"


// Sets default values
AE13_CPP_BA::AE13_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE13_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	if (EsMiembreGremio)
	{
		if (Nivel >= 50 && Reputacion >= 80)
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Bienvenido miembro: %s, tienes un descuento del 50 por ciento"), *NombreCliente), FColor::Green );
		}
		else if (Nivel >= 50 || Reputacion >= 80)
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Bienvenido miembro: %s, tienes un descuento del 30 por ciento"), *NombreCliente), FColor::Green );
		}
		else
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Bienvenido miembro: %s, no tienes descuento"), *NombreCliente), FColor::Green );
		}
	}
	if (!EsMiembreGremio)
	{
		if (Reputacion >= 70)
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Bienvenido viajero: %s, tienes un descuento del 15 por ciento"), *NombreCliente), FColor::Green );
		}
		else
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Lo siento viajero, no puedes pasar")), FColor::Green );
		}
	}
	
}

// Called every frame
void AE13_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

