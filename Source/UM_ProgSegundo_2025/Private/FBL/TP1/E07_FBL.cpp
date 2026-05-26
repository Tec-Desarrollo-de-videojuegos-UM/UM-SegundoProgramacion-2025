// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E07_FBL.h"

// Sets default values
AE07_FBL::AE07_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE07_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AE07_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AE07_FBL::Ciclo()
{
	while (contador >= 0)
	{
		GEngine->AddOnScreenDebugMessage(
	   -1,
	   5.f,
	   FColor::Green,
	   TEXT("Lanzamiento en: ") + FString::FromInt(contador));
		
		contador--;
	}
	if (contador <= 0)
	{
		GEngine->AddOnScreenDebugMessage(
	   -1,
	   5.f,
	   FColor::Green,
	   TEXT("¡Despegue!"));
		
	}
}

