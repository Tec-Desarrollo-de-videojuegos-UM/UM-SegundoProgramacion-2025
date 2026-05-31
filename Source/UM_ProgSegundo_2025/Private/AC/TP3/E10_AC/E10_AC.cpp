// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E10_AC/E10_AC.h"

// Sets default values
AE10_AC::AE10_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE10_AC::BeginPlay()
{
	Super::BeginPlay();
	MostrarMensaje(construirSaludo(TEXT("Naught"), 5));
	MostrarMensaje(construirSaludo(TEXT("Legolas"), 8));
	MostrarMensaje(construirSaludo(TEXT("Logan"), 3));
	
}

FString AE10_AC :: construirSaludo(FString NombreAventurero, int32 Nivel)
{
	return FString::Printf(TEXT("¡Bienvenido %s, nivel %d! Toma asiento aventurero."),*NombreAventurero,
		Nivel);
}
void AE10_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}

// Called every frame
void AE10_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

