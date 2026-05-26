// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E03_FBL.h"

// Sets default values
AE03_FBL::AE03_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE03_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AE03_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AE03_FBL::CalificarVida()
{
	if (vidaEnemigo < 30)
	{
		return "Debil";
	}

	if (vidaEnemigo >= 30 && vidaEnemigo <= 80)
	{
		return "Medio";
	}

	return "Jefe";
}


