// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E07_AC.h"

// Sets default values
AE07_AC::AE07_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE07_AC::BeginPlay()
{
	Super::BeginPlay();

	while (Contador >= 0)
	{
		MostrarMensaje(FString::Printf(TEXT("Lanzamiento en: %d"), Contador),FColor::Red);
		Contador--;
		
	}
	MostrarMensaje(FString::Printf(TEXT("!Despegue¡")),FColor::Green);
}
void AE07_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	
		
		
		if (GEngine)
		{
		
			static int32 MensajeID = 0;

			GEngine->AddOnScreenDebugMessage(MensajeID++,5.f,Color,Mensaje);
	
		}
	
}
// Called every frame
void AE07_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

