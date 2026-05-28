// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E10_CPP_BA.h"
#include "General/E01_CPP_BA.h"

// Sets default values
AE10_CPP_BA::AE10_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE10_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	AE01_CPP_BA::MostrarMensaje(ConstruirSaludo(TEXT("Naught"),5), FColor::Magenta);
	AE01_CPP_BA::MostrarMensaje(ConstruirSaludo(TEXT("Legolas"),8), FColor::Magenta);
	AE01_CPP_BA::MostrarMensaje(ConstruirSaludo(TEXT("Logan"),3), FColor::Magenta);
	
}

FString AE10_CPP_BA::ConstruirSaludo(const FString& NombreAventurero, int32 Nivel)
{
	return FString::Printf(TEXT("Bienvenido %s, nivel %i"), *NombreAventurero, Nivel);
}

// Called every frame
void AE10_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

