// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "AlejoAguilar/E05_AlejoAguilar.h"

// Sets default values
AE05_AlejoAguilar::AE05_AlejoAguilar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE05_AlejoAguilar::BeginPlay()
{
	Super::BeginPlay();

	for (int32 i = 1; i <= 10; ++i)
	{
		if (i % 2 == 0)
		{
			monedaOro++;
			valorTotal += 10;
			
			MostrarNumero(FString::Printf(TEXT("Numero %d: Moneda de Oro obtenida"), i), FColor::Red);
		}
		else
		{
			monedaPlata++;
			valorTotal += 5;
			
			MostrarNumero(FString::Printf(TEXT("Numero %d: Moneda de Plata obtenida"), i), FColor::Green);
		}
	}
	MostrarNumero(FString::Printf(TEXT("Total de puntos: %d"), valorTotal), FColor::Blue);
	MostrarNumero(FString::Printf(TEXT("Total de Monedas de oro: %d"), monedaOro), FColor::White);
	MostrarNumero(FString::Printf(TEXT("Total de Monedas de plata: %d"), monedaPlata), FColor::White);
}
void AE05_AlejoAguilar::MostrarNumero(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5,Color,Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
// Called every frame
void AE05_AlejoAguilar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

