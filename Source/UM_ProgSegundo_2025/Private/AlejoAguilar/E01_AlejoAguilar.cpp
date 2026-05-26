// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "AlejoAguilar/E01_AlejoAguilar.h"

// Sets default values
AE01_AlejoAguilar::AE01_AlejoAguilar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE01_AlejoAguilar::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString :: Printf(TEXT("A = %d"), A));
	MostrarMensaje(FString :: Printf(TEXT("B = %.2f"), B));
	MostrarMensaje(FString :: Printf(TEXT("C = %s"), *C));
	
	float Suma = A+B;
	float Resta = B-A;
	
	MostrarMensaje(FString :: Printf(TEXT("A+B = %.2f"), Suma));
	MostrarMensaje(FString :: Printf(TEXT("B-A = %.2f"), Resta));
	
	int32 ValorNumerico = static_cast<int32>(C[0]);
	MostrarMensaje(FString :: Printf(TEXT("Valor Numerico C= %d"), ValorNumerico));
}

void AE01_AlejoAguilar::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5,Color,Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE01_AlejoAguilar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

