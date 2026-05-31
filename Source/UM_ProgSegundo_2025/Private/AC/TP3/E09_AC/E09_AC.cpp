// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E09_AC/E09_AC.h"

// Sets default values
AE09_AC::AE09_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE09_AC::BeginPlay()
{
	Super::BeginPlay();
	if (monedas >= 10)
	{
		MostrarMensaje(FString::Printf(TEXT("Sea bienvenido %s. Puedes entrar al pueblo."),*NombreViajero),
			FColor::Blue);
	}
	else
	{
		MostrarMensaje(
			FString::Printf(TEXT("Perdon %s, Nesesitas 10 monedas para entrar. Tienes: %d"),*NombreViajero,monedas)
				,FColor::Red);
	}
	
}
void AE09_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;
		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE09_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

