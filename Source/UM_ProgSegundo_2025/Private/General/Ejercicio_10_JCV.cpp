// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_10_JCV.h"

// Sets default values
AEjercicio_10_JCV::AEjercicio_10_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_10_JCV::BeginPlay()
{
	Super::BeginPlay();
	ConstruirSaludo("Legolas", 21);
	ConstruirSaludo("Sparta", 2);
	ConstruirSaludo("Aegon", 44);
	
}

void AEjercicio_10_JCV::ConstruirSaludo(FString NombreAventurero ,int32 Nivel)
{
	MostrarMensaje(FString::Printf(TEXT("Bienvenido, %s!, nivel-> %d. Toma asiento aventurero."),*NombreAventurero, Nivel), FColor::Green);
}


void AEjercicio_10_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AEjercicio_10_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

