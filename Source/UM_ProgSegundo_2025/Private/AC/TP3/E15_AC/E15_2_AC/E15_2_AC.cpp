// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E15_AC/E15_2_AC/E15_2_AC.h"

// Sets default values
AE15_2_AC::AE15_2_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_2_AC::BeginPlay()
{
	Super::BeginPlay();
	
	if (Numero >= 0)
	{
		MostrarMensaje(FString::Printf(TEXT("%d es un numero positivo"), Numero),FColor::Green);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("%d es un numero negativo"), Numero),FColor::Red);
	}
	
}
void AE15_2_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE15_2_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

