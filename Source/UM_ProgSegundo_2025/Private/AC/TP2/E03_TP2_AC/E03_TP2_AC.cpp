// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E03_TP2_AC/E03_TP2_AC.h"

// Sets default values
AE03_TP2_AC::AE03_TP2_AC()
{
	PrimaryActorTick.bCanEverTick = false;

	ArrayFrutas.Add(TEXT("Manzana"));
	ArrayFrutas.Add(TEXT("Banana"));
	ArrayFrutas.Add(TEXT("Naranja"));
}

// Called when the game starts or when spawned
void AE03_TP2_AC::BeginPlay()
{
	Super::BeginPlay();

	FString BooleanTexto = Boolean ? TEXT("Verdadero") : TEXT("Falso");

	FString Mensaje = FString::Printf(
		TEXT("Boolean: %s\nEntero: %d\nFloat: %.2f\nTexto: %s"),*BooleanTexto,Entero,Decimal,*Texto.ToString());
	MostrarMensaje(Mensaje, FColor::Cyan);

	for (const FString& Fruta : ArrayFrutas)
	{
		MostrarMensaje(FString::Printf(TEXT("Fruta: %s"), *Fruta));
	}
}

void AE03_TP2_AC::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,8.0f,Color,Mensaje);
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}