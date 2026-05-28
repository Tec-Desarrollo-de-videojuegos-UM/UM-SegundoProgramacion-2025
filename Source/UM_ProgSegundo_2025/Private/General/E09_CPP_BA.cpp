// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E09_CPP_BA.h"
#include  "General/E01_CPP_BA.h"

// Sets default values
AE09_CPP_BA::AE09_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE09_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	Monedas = FMath::RandRange(0, 20);
	if (Monedas >= 10)
	{
		AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Te damos la bienvenida %s. Puedes entrar al pueblo"), *NombreViajero), FColor::Emerald);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Lo siento %s, necesitas al menos 10 monedas. Tienes %i"),*NombreViajero, Monedas), FColor::Emerald);
	}
}

// Called every frame
void AE09_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

