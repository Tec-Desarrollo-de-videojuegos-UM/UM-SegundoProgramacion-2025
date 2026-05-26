// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/EO4_FBL.h"

// Sets default values
AEO4_FBL::AEO4_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEO4_FBL::BeginPlay()
{
	Super::BeginPlay();
	numeroRandom = FMath::RandRange(0,10);
}

// Called every frame
void AEO4_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
 
}

FString AEO4_FBL::ParoImpar()
{
	if (numeroRandom %2 == 0)
	{
		return TEXT("El numero ") + FString::FromInt(numeroRandom) + TEXT(" es par");
	}
	else
	{
		return TEXT("El numero ") + FString::FromInt(numeroRandom) + TEXT(" es impar");
	}
	
}

