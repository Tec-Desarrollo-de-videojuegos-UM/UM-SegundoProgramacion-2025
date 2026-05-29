// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_05_JCV.h"

// Sets default values
AEjercicio_05_JCV::AEjercicio_05_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_05_JCV::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			MonedasOro = MonedasOro + 1;
			ValorTotal += 10;
			
		}else
		{
			MonedasPlata = MonedasPlata + 1;
			ValorTotal += 5;
			
		}
	}
	MostrarMensaje(FString::Printf(TEXT("El valor total es->: %d"), ValorTotal), FColor::Cyan);
	MostrarMensaje(FString::Printf(TEXT("La cantidad de monedas de oro es->: %d"), MonedasOro), FColor::Cyan);
	MostrarMensaje(FString::Printf(TEXT("La cantidad de plata de oro es->: %d"), MonedasPlata), FColor::Cyan);
	
	
}

void AEjercicio_05_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
