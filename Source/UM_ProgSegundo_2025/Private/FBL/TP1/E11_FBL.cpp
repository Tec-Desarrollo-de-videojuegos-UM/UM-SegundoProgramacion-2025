// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E11_FBL.h"

// Sets default values
AE11_FBL::AE11_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE11_FBL::BeginPlay()
{
	Super::BeginPlay();
	
	if (TieneLlave && !EstaMaldito)
	{
		GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				TEXT("Tienes la llave Y NO estás maldito ")+ NombreJugador);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				TEXT("No tienes la Llave o estas maldito"));
	}
	
}

// Called every frame
void AE11_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

