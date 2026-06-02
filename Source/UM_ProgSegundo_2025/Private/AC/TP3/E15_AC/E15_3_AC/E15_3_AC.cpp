// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E15_AC/E15_3_AC/E15_3_AC.h"

// Sets default values
AE15_3_AC::AE15_3_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_3_AC::BeginPlay()
{
	Super::BeginPlay();
	MostrarMensaje(FString::Printf(TEXT("Analizando el numero %d"), Numero),FColor::Yellow);
	
	if (Numero >= 0)
	{
		MostrarMensaje(TEXT("Es positivo"));
	}
	else
	{
		MostrarMensaje(TEXT("Es negativo"));
	}
	
	if (Numero % 2 == 0)
	{
		MostrarMensaje(TEXT("Es par"));
	}
	else
	{
		MostrarMensaje(TEXT("Es impar"));
	}
	
	if (Numero % 5 == 0)
	{
		MostrarMensaje(TEXT("Es multiplo de 5"));
	}
	else
	{
		MostrarMensaje(TEXT("No es multiplo de 5"));
	}
	
	if (Numero % 10 == 0)
	{
		MostrarMensaje(TEXT("Es multiplo de 10"));
	}
	else
	{
		MostrarMensaje(TEXT("No es multiplo de 10"));
	}
	
	if (Numero > 100)
	{
		MostrarMensaje(TEXT("Es mayor que 100"));
	}
	else
	{
		MostrarMensaje(TEXT("No es mayor que 100"));
	}
	
}
void AE15_3_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}

// Called every frame
void AE15_3_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

