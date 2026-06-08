// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E09_FBL.h"

// Sets default values
AE09_FBL::AE09_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE09_FBL::BeginPlay()
{
	Super::BeginPlay();

	if (Monedas>=10)
	{
		GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				TEXT("Bienvenido ")+ NombreViajero + TEXT (" Monedas:")
				+ FString::FromInt(Monedas));
				
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				TEXT("No cuenta con monedas suficiente. Monedas: ")
				+ FString::FromInt(Monedas));
				
	}
}

// Called every frame
void AE09_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

