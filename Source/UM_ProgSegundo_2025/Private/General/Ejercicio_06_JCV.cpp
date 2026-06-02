// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_06_JCV.h"

// Sets default values
AEjercicio_06_JCV::AEjercicio_06_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_06_JCV::BeginPlay()
{
	Super::BeginPlay();
	
	Guerreros.Add("Ragnar");
	Guerreros.Add("Bjorn");
	Guerreros.Add("Lagertha");
	Guerreros.Add("Iron");
	Guerreros.Add("Stan");
	
	for (int i = 0; i < Guerreros.Num(); ++i)
	{
		MostrarMensaje(FString::Printf(TEXT("Guerrero en indice %d: %s"), i, *Guerreros[i]), FColor::Cyan);
	}
	
}
void AEjercicio_06_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

void AEjercicio_06_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}