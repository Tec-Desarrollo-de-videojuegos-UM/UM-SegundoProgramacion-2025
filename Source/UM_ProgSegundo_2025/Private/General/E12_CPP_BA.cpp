// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E12_CPP_BA.h"
#include "General/E01_CPP_BA.h"

// Sets default values
AE12_CPP_BA::AE12_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE12_CPP_BA::BeginPlay()
{
	Super::BeginPlay();

	if (EstaMaldito)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("Estas maldito"), FColor::Blue);
	}
	else if (Nivel > 70 || TienePase)
	{
		AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Bienvenido Viajero %s"), *NombreViajero), FColor::Blue);
	}
}

// Called every frame
void AE12_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

