// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_01_JCV.h"

// Sets default values
AEjercicio_01_JCV::AEjercicio_01_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEjercicio_01_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

void AEjercicio_01_JCV::BeginPlay()
{
	Super::BeginPlay();
    
	
	MostrarMensaje(FString::Printf(TEXT("Valor de N: %d"), N), FColor::Cyan);
	MostrarMensaje(FString::Printf(TEXT("Valor de A: %f"), A), FColor::Cyan);
	MostrarMensaje(FString::Printf(TEXT("Valor de C: %s"), *C), FColor::Cyan);

	float Suma = N + A;
	float Resta = A - N;

	MostrarMensaje(FString::Printf(TEXT("Resultado Suma (N + A): %f"), Suma), FColor::Green);
	MostrarMensaje(FString::Printf(TEXT("Resultado Resta (A - N): %f"), Resta), FColor::Red);

	if (C.Len() > 0)
	{
		int32 ValorNumerico = static_cast<int32>(C[0]); 
		MostrarMensaje(FString::Printf(TEXT("Valor numérico del carácter '%s': %d"), *C, ValorNumerico), FColor::Yellow);
	}
}
