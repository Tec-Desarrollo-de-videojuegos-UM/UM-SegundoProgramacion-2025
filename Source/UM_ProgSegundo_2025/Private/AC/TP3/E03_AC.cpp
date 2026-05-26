// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E03_AC.h"

// Sets default values
AE03_AC::AE03_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE03_AC::BeginPlay()
{
	Super::BeginPlay();
	
	if (VidaEnemigos < 30)
	{
		MostrarMensaje(TEXT("Enemigo debil"), FColor::Green);
	}
	else if (VidaEnemigos >= 30 && VidaEnemigos <= 80)
	{
		MostrarMensaje(TEXT("enemigo medio"), FColor::Yellow);
	}
	else if (VidaEnemigos >= 80)
	{
		MostrarMensaje(TEXT("Jefe"), FColor::Red);
	}
	
	
}
void AE03_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, Color, Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE03_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

