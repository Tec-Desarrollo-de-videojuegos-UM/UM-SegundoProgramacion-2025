// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E15_AC/E15_5_AC/E15_5_AC.h"

// Sets default values
AE15_5_AC::AE15_5_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_5_AC::BeginPlay()
{
	Super::BeginPlay();
	
	if (Cantidad <= 0)
	{
		MostrarMensaje(
			TEXT("Error: la cantidad debe ser mayor que 0"),
			FColor::Red);

		return;
	}

	int32 Anterior = 0;
	int32 Actual = 1;

	MostrarMensaje(TEXT("Secuencia Fibonacci:"), FColor::Yellow);

	for (int32 i = 0; i < Cantidad; i++)
	{
		MostrarMensaje(
			FString::Printf(TEXT("%d"), Anterior));

		int32 Siguiente = Anterior + Actual;

		Anterior = Actual;
		Actual = Siguiente;
	}
	
}
void AE15_5_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}

// Called every frame
void AE15_5_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

