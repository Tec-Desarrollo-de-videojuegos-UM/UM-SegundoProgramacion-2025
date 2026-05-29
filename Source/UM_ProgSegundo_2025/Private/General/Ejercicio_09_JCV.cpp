// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_09_JCV.h"

// Sets default values
AEjercicio_09_JCV::AEjercicio_09_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_09_JCV::BeginPlay()
{
	Super::BeginPlay();
	Monedas = FMath::RandRange(1, 20);
	
	if (Monedas >10)
	{
			MostrarMensaje(FString::Printf(TEXT("Bienvenidoo!, tienes las monedas necesarias-> %d"), Monedas), FColor::Green);
	}
	else
	{
			MostrarMensaje(FString::Printf(TEXT("Rechazado!,necesitas al menos 10 monedas. Tienes: %d"), Monedas), FColor::Red);
		
	}
}

void AEjercicio_09_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AEjercicio_09_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

