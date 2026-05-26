// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E05_AC.h"

// Sets default values
AE05_AC::AE05_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE05_AC::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 1; i <= 10; i++)
	{
		// Si es par
		if (i % 2 == 0)
		{
			MonedasOro++;

			ValorTotal += 10;

			MostrarMensaje(FString::Printf(TEXT("Moneda %d: Oro (+10)"), i),FColor::Yellow);
		}
		else
		{
			MonedasPlata++;

			ValorTotal += 5;

			MostrarMensaje(FString::Printf(TEXT("Moneda %d: Plata (+5)"), i),FColor::Silver);
		}
	}
	
	MostrarMensaje(FString::Printf(TEXT("Monedas de oro: %d"), MonedasOro),FColor::Yellow);

	MostrarMensaje(FString::Printf(TEXT("Monedas de plata: %d"), MonedasPlata),FColor::Silver);

	MostrarMensaje(FString::Printf(TEXT("Valor total: %d"), ValorTotal),FColor::Cyan);
}
void AE05_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, Color, Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}




// Called every frame
void AE05_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

