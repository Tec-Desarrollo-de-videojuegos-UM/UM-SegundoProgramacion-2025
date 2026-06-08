// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E12_FBL.h"

// Sets default values
AE12_FBL::AE12_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE12_FBL::BeginPlay()
{
	Super::BeginPlay();
	
		if (!EstaMaldito && (Nivel>=70 || TienePase))
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				NombreViajero + TEXT(" Nivel: ")+ FString::FromInt(Nivel) + TEXT(" O Tienes el Pase"));
		}
		else if (EstaMaldito)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Red,
				TEXT("Estás maldito ")+ NombreViajero + TEXT(" No puedes pasar"));
			
		}
		else
		{
		GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Red,
				TEXT("No tienes nivel suficiente o no tienes el pase"));
		}
}

// Called every frame
void AE12_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

