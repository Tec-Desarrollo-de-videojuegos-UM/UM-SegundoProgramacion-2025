// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_11_JCV.h"

// Sets default values
AEjercicio_11_JCV::AEjercicio_11_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_11_JCV::BeginPlay()
{
	Super::BeginPlay();
	if (TieneLlave && !EstaMaldito)
	{
		MostrarMensaje(FString::Printf(TEXT("Abriste el cofre, Tiene llave Y NO está maldito")), FColor::Green);
		
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("No pudiste abrir el cofre, No Tiene llave Y Está maldito")), FColor::Green);
	}
}

void AEjercicio_11_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
// Called every frame
void AEjercicio_11_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

