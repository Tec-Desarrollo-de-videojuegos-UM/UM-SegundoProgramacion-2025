// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E_02_Ac.h"

// Sets default values
AE_02_Ac::AE_02_Ac()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE_02_Ac::BeginPlay()
{
	Super::BeginPlay();
	 int32 DanoEfectivo = Ateque - Defensa;
	int32 VidaFinal = Vida - DanoEfectivo;
	MostrarMensajes(FString::Printf(TEXT("Vida final = %d"), VidaFinal));
	
		
	 	
	
}
void AE_02_Ac::MostrarMensajes(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, Color, Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
	 
// Called every frame
void AE_02_Ac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

