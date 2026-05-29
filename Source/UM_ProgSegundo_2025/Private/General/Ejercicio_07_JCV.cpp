// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_07_JCV.h"

// Sets default values
AEjercicio_07_JCV::AEjercicio_07_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_07_JCV::BeginPlay()
{
	Super::BeginPlay();

	while (Contador >= 0)
	{
		Contador--;
		MostrarMensaje(FString::Printf(TEXT("Nro de contador: %d"), Contador), FColor::Cyan);
		
	}
	
		MostrarMensaje(FString::Printf(TEXT("Despegue!!!!!")), FColor::Cyan);
	
}


void AEjercicio_07_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}


// Called every frame
void AEjercicio_07_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

