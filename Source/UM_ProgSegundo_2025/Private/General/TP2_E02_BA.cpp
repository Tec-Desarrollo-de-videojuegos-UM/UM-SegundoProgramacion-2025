// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E02_BA.h"
#include  "General/E01_CPP_BA.h"

// Sets default values
ATP2_E02_BA::ATP2_E02_BA()
{
	PrimaryActorTick.bCanEverTick = false;
	
	ArrayFrutas.Add(TEXT("Manzana"));
	ArrayFrutas.Add(TEXT("Banana"));
	ArrayFrutas.Add(TEXT("Naranja"));

}

// Called when the game starts or when spawned
void ATP2_E02_BA::BeginPlay()
{
	Super::BeginPlay();
	
	FString BooleanTexto = Boolean ? TEXT("True") : TEXT("False");
	
	FString Mensaje = FString::Printf(
		TEXT("Boolean: %s\nEntero: %d\nFloat: %.2f\nTexto: %s"),
		*BooleanTexto,
		Entero,
		Decimal,
		*Texto.ToString()
		);
	AE01_CPP_BA::MostrarMensaje(Mensaje, FColor::Cyan);
	
	for (const FString& Fruta : ArrayFrutas)
	{
		AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Fruta: %s"), *Fruta), FColor::Cyan);
	}
}

// Called every frame
void ATP2_E02_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

