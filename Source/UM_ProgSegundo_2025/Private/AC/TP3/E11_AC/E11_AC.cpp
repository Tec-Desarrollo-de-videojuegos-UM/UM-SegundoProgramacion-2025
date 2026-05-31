// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E11_AC/E11_AC.h"

// Sets default values
AE11_AC::AE11_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE11_AC::BeginPlay()
{
	Super::BeginPlay();
	
	if ( TieneLlave && !EstaMaldita)
	{
		MostrarMensaje(FString::Printf(TEXT("%s puede abrir el cofre."),*NombreJugador),FColor::Green);
	}
	else if (!TieneLlave)
	{
		MostrarMensaje(FString::Printf(TEXT("%s No tine la llave, No puede abrir el cofre."),
			*NombreJugador),FColor::Yellow);
	}
	else if (EstaMaldita)
	{
		MostrarMensaje(FString::Printf(TEXT("%s Tine la llave, Pero esta maldita y no puede abrir el cofre."),
		*NombreJugador),FColor::Red);
	}
	
}
void AE11_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}

// Called every frame
void AE11_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

