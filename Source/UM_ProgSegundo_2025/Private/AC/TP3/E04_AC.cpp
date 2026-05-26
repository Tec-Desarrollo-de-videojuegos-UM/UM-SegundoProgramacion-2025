// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E04_AC.h"

// Sets default values
AE04_AC::AE04_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE04_AC::BeginPlay()
{
	Super::BeginPlay();
	Numero = FMath::RandRange(0, 30);
	if (Numero % 2 == 0)
	 {
	 	MostrarMensaje(
			FString::Printf(TEXT("El numero %d es par"), Numero),
			FColor::Orange);
	 }
	else
	{
		MostrarMensaje(
			FString::Printf(TEXT("El numero %d es impar"), Numero),
			FColor::Yellow);
	}
	
	
}
void AE04_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, Color, Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE04_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

