// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_12_JCV.h"

// Sets default values
AEjercicio_12_JCV::AEjercicio_12_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_12_JCV::BeginPlay()
{
	Super::BeginPlay();
	
	if (!EstaMaldito)
	{
		if (Nivel>= 70 || TienePase)
		{
		MostrarMensaje(FString::Printf(TEXT("Pudiste pasar, el troll esta de buenas - Tiene nivel 70 o tiene pase. - Nivel:%d , Pase: %d"), Nivel, TienePase), FColor::Green);
			
		}
	}else
	{
		MostrarMensaje(FString::Printf(TEXT("No pudiste pasar,está maldito")), FColor::Red);
		
	}
}


void AEjercicio_12_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}
// Called every frame
void AEjercicio_12_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

