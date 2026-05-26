// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_04_JCV.h"

// Sets default values
AEjercicio_04_JCV::AEjercicio_04_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_04_JCV::BeginPlay()
{
	Super::BeginPlay();
	
	Number = FMath::RandRange(0 ,10);
	
	if (Number%2 ==0)
	{
		MostrarMensaje(FString::Printf(TEXT("El resto es Par,->: %d"), Number), FColor::Cyan);
	}else
	{
		MostrarMensaje(FString::Printf(TEXT("El resto es Impar,->: %d"), Number), FColor::Cyan);
	}
	
}
void AEjercicio_04_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
