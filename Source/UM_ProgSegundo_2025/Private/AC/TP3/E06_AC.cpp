// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E06_AC.h"

// Sets default values
AE06_AC::AE06_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE06_AC::BeginPlay()
{
	Super::BeginPlay();
	Guerreros.Add(TEXT("Aragorn"));
	Guerreros.Add(TEXT("Frodo Bolsón"));
	Guerreros.Add(TEXT("Gandalf"));
	Guerreros.Add(TEXT("Legolas"));
	Guerreros.Add(TEXT("Gimli"));
	for (const FString& Guerrero : Guerreros)
	{
		MostrarMensaje(FString::Printf(TEXT("Guerrero listo para combate: %s"),*Guerrero),FColor::Green);
		
	}
	MostrarMensaje(TEXT("Todos los guerreros estan listos"),FColor::Yellow);
	
}
void AE06_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		// ID diferente para cada mensaje
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,5.f,Color,Mensaje);
	
	}
}
// Called every frame
void AE06_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

