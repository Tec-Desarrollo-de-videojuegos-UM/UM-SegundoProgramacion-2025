// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "AlejoAguilar/E03_AlejoAguilar.h"

// Sets default values
AE03_AlejoAguilar::AE03_AlejoAguilar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE03_AlejoAguilar::BeginPlay()
{
	Super::BeginPlay();
	if (vidaEnemigo < 30)
	{
	     MostrarVida(FString::Printf(TEXT("Enemigo debil = %d"), vidaEnemigo), FColor::Red);
	}
	else if(vidaEnemigo <= 80)
	{
		MostrarVida(FString::Printf(TEXT("Enemigo Medio = %d"), vidaEnemigo), FColor::Yellow);
	}
	else
	{
		MostrarVida(FString::Printf(TEXT("Enemigo Jefe = %d"), vidaEnemigo), FColor::Green);
	}
}

void AE03_AlejoAguilar::MostrarVida(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5,Color,Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}



// Called every frame
void AE03_AlejoAguilar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

