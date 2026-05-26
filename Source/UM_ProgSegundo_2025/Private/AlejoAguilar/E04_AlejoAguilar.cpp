// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "AlejoAguilar/E04_AlejoAguilar.h"

// Sets default values
AE04_AlejoAguilar::AE04_AlejoAguilar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE04_AlejoAguilar::BeginPlay()
{
	Super::BeginPlay();
	numero = FMath::RandRange(0, 10);
	
	if (numero %2 == 0)
	{
		MostrarNumero(FString::Printf(TEXT("Numero par = %d"), numero), FColor::Green);
	}
	else
	{
		MostrarNumero(FString::Printf(TEXT("Numero impar = %d"), numero), FColor::Green);
	}
	
}
void AE04_AlejoAguilar::MostrarNumero(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5,Color,Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
// Called every frame
void AE04_AlejoAguilar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

