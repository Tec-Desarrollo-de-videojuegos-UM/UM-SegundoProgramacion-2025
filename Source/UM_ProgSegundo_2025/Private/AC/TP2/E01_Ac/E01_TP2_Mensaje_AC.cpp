// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E01_Ac/E01_TP2_Mensaje_AC.h"

// Sets default values
AE01_TP2_Mensaje_AC::AE01_TP2_Mensaje_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AE01_TP2_Mensaje_AC::BeginPlay()
{
	Super::BeginPlay();

	MostrarMensaje(TEXT("Hola desde C++"), FColor::Green);
}

void AE01_TP2_Mensaje_AC::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.0f,Color,Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}


