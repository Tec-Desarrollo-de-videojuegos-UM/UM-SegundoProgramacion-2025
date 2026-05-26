// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_03_JCV.h"

// Sets default values
AEjercicio_03_JCV::AEjercicio_03_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_03_JCV::BeginPlay()
{
	Super::BeginPlay();
	
	EnemyLife = FMath::RandRange(1, 100);
	if (EnemyLife<30)
	{
		MostrarMensaje(FString::Printf(TEXT("El enemigo es Debil. Su vida es: %d"), EnemyLife), FColor::Cyan);
	}else if (EnemyLife < 80 && EnemyLife > 30 )
	{
		MostrarMensaje(FString::Printf(TEXT("El enemigo es Medio. Su vida es: %d"), EnemyLife), FColor::Cyan);
	}else
	{
		MostrarMensaje(FString::Printf(TEXT("El enemigo es un Jefe. Su vida es: %d"), EnemyLife), FColor::Cyan);
	}
	
	
}
void AEjercicio_03_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}