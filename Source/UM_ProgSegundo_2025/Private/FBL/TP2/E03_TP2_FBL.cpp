// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP2/E03_TP2_FBL.h"

// Sets default values
AE03_TP2_FBL::AE03_TP2_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ArrayFrutas.Add(TEXT("Manzana"));
	ArrayFrutas.Add(TEXT("Banana"));
	ArrayFrutas.Add(TEXT("Naranja"));
}

// Called when the game starts or when spawned
void AE03_TP2_FBL::BeginPlay()
{
	Super::BeginPlay();
	
	FString BooleanTexto = Boolean ? TEXT("Verdadero"):TEXT("Falso");
	
	FString Mensaje = FString::Printf(TEXT("Boolean: %s\nEntero: %d\nFloat: %.2f\nTexto: %s"),
		*BooleanTexto,
		Entero,
		Decimal,
		*Texto.ToString());
	
	MostrarMensaje(Mensaje, FColor::Cyan);
	for (const FString& Fruta : ArrayFrutas)
	{
		MostrarMensaje(FString::Printf(TEXT("Frutas:%s"), *Fruta));
	}
}

void AE03_TP2_FBL::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}



