// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E03_BA.h"
#include "General/E01_CPP_BA.h"

// Sets default values
ATP2_E03_BA::ATP2_E03_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATP2_E03_BA::BeginPlay()
{
	Super::BeginPlay();
	
	int32 ValorAtaqueFinal = CalcularAtaque(Poder);
	
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor de ataque final: %d"), ValorAtaqueFinal), 
	FColor::White	
	);
	
	if (ValorAtaqueFinal >= 40)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El Ataque es poderoso"), FColor::Green);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("Falta poder"), FColor::Red);
	}
}

int32 ATP2_E03_BA::CalcularAtaque(int32 CantidadDePoder)
{
	return (CantidadDePoder*5) + 10;
}

// Called every frame
void ATP2_E03_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

