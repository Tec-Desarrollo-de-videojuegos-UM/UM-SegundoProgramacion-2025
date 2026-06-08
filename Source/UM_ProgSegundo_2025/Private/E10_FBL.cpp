// Fill out your copyright notice in the Description page of Project Settings.


#include "E10_FBL.h"

// Sets default values
AE10_FBL::AE10_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE10_FBL::BeginPlay()
{
	Super::BeginPlay();
	
	FString Aventuredo1 = ConstruirSaludo(NombreAventuredo1,NivelAventuredo1);
	FString Aventuredo2 = ConstruirSaludo(NombreAventuredo2,NivelAventuredo2);
	FString Aventuredo3 = ConstruirSaludo(NombreAventuredo3,NivelAventuredo3);
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, Aventuredo1);
	}
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, Aventuredo2);
	}
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, Aventuredo3);
	}
	
	
}

// Called every frame
void AE10_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AE10_FBL::ConstruirSaludo(FString NombreAventurero, int32 Nivel)
{
	FString MensajeFinal = FString::Printf(TEXT("¡Bienvenido %s, nivel %d! Toma asiento aventurero."),
	*NombreAventurero, Nivel);
	
	return MensajeFinal;
}

