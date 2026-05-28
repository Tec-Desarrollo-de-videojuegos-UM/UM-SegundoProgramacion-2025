// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E03_CPP_BA.h"

// Sets default values
AE03_CPP_BA::AE03_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE03_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	if (VidaEnemigo < 30)
	{
		MostrarMensaje(FString::Printf(TEXT("Debil")), FColor::Yellow);
	}
	else if (VidaEnemigo >= 30 && VidaEnemigo <= 80)
	{
		MostrarMensaje(FString::Printf(TEXT("Medio")), FColor::Yellow);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("Fuerte")), FColor::Yellow);
	}
	
}

// Called every frame
void AE03_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AE03_CPP_BA::MostrarMensaje(const FString& mensaje, FColor color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, color, mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *mensaje);
}
