// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E04_TP2_AC/E04_TP2_AC.h"

// Sets default values
AE04_TP2_AC::AE04_TP2_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE04_TP2_AC::BeginPlay()
{
	Super::BeginPlay();

	int32 ValorDeAtaqueFinal = CalcularAtaque(Poder);

	MostrarMensaje(
		FString::Printf(TEXT("Valor de ataque final: %d"), ValorDeAtaqueFinal),FColor::White);

	if (ValorDeAtaqueFinal >= 40)
	{
		MostrarMensaje(TEXT("El ataque es poderoso"), FColor::Green);
	}
	else
	{
		MostrarMensaje(TEXT("Falta poder"), FColor::Red);
	}
}

int32 AE04_TP2_AC::CalcularAtaque(int32 CantidadDePoder)
{
	return (CantidadDePoder * 5) + 10;
}
void AE04_TP2_AC::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,8.0f,Color,Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}