// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E15_AC/E15_4_AC/E15_4_AC.h"

// Sets default values
AE15_4_AC::AE15_4_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_4_AC::BeginPlay()
{
	Super::BeginPlay();
	int32 Numero = Dia + Mes + Anio;
	int32 NumeroSuerte = 0;

	MostrarMensaje(FString::Printf(TEXT("Fecha: %d/%d/%d"),Dia, Mes, Anio),FColor::Yellow);

	MostrarMensaje(FString::Printf(TEXT("Suma inicial: %d"),Numero));

	while (Numero > 0)
	{
		int32 Digito = Numero % 10;

		NumeroSuerte += Digito;

		Numero = Numero / 10;
	}
	MostrarMensaje(FString::Printf(TEXT("Numero de la suerte: %d"),NumeroSuerte),FColor::Green);
}
void AE15_4_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE15_4_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

