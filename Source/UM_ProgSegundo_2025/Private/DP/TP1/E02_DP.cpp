// Fill out your copyright notice in the Description page of Project Settings.


#include "DP/TP1/E02_DP.h"

// Sets default values
AE02_DP::AE02_DP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE02_DP::BeginPlay()
{
	Super::BeginPlay();
	
	int32 Damage = Ataque - Defensa;
	
	MostrarMensaje(FString::Printf(TEXT("Vida Actual = %d"), Vida));
	
	Vida = Vida - Damage;
	
	MostrarMensaje(FString::Printf(TEXT("Daño recibido = %d"), Damage));
	MostrarMensaje(FString::Printf(TEXT("Vida Nueva = %d"), Vida));
	
}

void AE02_DP::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, Color, Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE02_DP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

