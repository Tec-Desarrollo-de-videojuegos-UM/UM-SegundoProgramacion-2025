// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E02_CPP_BA.h"

// Sets default values
AE02_CPP_BA::AE02_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE02_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	int32 DanioEfectivo = CalcularDamageEfectivo(Ataque, Defensa);
	int32 VidaFinal = CalcularVidaFinal(Vida, DanioEfectivo);
	
	MostrarMensaje(FString::Printf(TEXT("Vida final = %d"), VidaFinal), FColor::Red);
	
}

void AE02_CPP_BA::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, Color, Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}	

// Called every frame
void AE02_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

