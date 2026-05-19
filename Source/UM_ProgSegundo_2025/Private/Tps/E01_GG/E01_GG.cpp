// Fill out your copyright notice in the Description page of Project Settings.

#include "Tps/E01_GG/E01_GG.h"
#include "Engine/Engine.h"

// Sets default values
AE01_GG::AE01_GG()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AE01_GG::BeginPlay()
{
	Super::BeginPlay();

	MostrarMensaje(FString::Printf(TEXT("N = %d"), N));
	MostrarMensaje(FString::Printf(TEXT("A = %.2f"), A));
	MostrarMensaje(FString::Printf(TEXT("C = %s"), *C));

	float Suma = N + A;
	float Diferencia = A - N;

	MostrarMensaje(FString::Printf(TEXT("N + A = %.2f"), Suma));
	MostrarMensaje(FString::Printf(TEXT("A - N = %.2f"), Diferencia));

	int32 ValorNumerico = static_cast<int32>(C[0]);
	MostrarMensaje(FString::Printf(TEXT("Valor numérico de C = %d"), ValorNumerico));
}

// Called every frame
void AE01_GG::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AE01_GG::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, Color, Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

