// Fill out your copyright notice in the Description page of Project Settings.

#include "General/E01_CPP_BA.h"

// Sets default values
AE01_CPP_BA::AE01_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE01_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString::Printf(TEXT("N = %d"), Numero), FColor::Blue);
	MostrarMensaje(FString::Printf(TEXT("A = %.2f"), A), FColor::Blue);
	MostrarMensaje(FString::Printf(TEXT("C = %s"), *C), FColor::Blue);
	
	float suma = Numero + A;
	float resta = A - Numero;
	int32 vNumero = (int32)C[0];
	
	MostrarMensaje(FString::Printf(TEXT("N + A =%f"), suma), FColor::Blue);
	MostrarMensaje(FString::Printf(TEXT("A - N = %f"), resta), FColor::Blue);
	MostrarMensaje(FString::Printf(TEXT("Valor numerico de C = %d"), vNumero), FColor::Blue);
	
}	

void AE01_CPP_BA::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, Color, Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE01_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

