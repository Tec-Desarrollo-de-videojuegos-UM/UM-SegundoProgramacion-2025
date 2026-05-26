// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_02_JCV.h"

// Sets default values
AEjercicio_02_JCV::AEjercicio_02_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_02_JCV::BeginPlay()
{
	Super::BeginPlay();
	int32 EffectiveDamage = Attack - Defense;
	
	MostrarMensaje(FString::Printf(TEXT("Vida final: %d"), Life-EffectiveDamage), FColor::Cyan);
	
}


void AEjercicio_02_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}