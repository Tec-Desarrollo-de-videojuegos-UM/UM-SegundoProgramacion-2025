// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E12_AC/E12_AC.h"

// Sets default values
AE12_AC::AE12_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE12_AC::BeginPlay()
{
	Super::BeginPlay();
	if (EstaMaldito)
	{
		MostrarMensaje(FString::Printf(TEXT("%s no vas a poder pasar por estar maldito."),*NombreViajero),
		FColor::Red);
	}
	else if (Nivel >=70  || TienePase)
	{
		MostrarMensaje(FString::Printf(TEXT("%s puedes pasar troll te lo permite."),*NombreViajero),
		FColor::Green);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("%s no puedes pasar, no tienes el pase ni el nivel suficiente."),
			*NombreViajero),FColor::Yellow);
	}
}
void AE12_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}


// Called every frame
void AE12_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

