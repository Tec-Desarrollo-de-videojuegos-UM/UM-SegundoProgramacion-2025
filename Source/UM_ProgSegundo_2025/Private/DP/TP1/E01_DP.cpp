// Fill out your copyright notice in the Description page of Project Settings.


#include "DP/TP1/E01_DP.h"

// Sets default values
AE01_DP::AE01_DP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE01_DP::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString::Printf(TEXT("N = %d", N)));
	MostrarMensaje(FString::Printf(TEXT("A = %.2f", A)));
	MostrarMensaje(FString::Printf(TEXT("C = %s", *C)));
	
	float Suma = N+A;
	float Resta = A-N;
	
	MostrarMensaje(FString::Printf(TEXT("N + A = %.2f", Suma)));
	MostrarMensaje(FString::Printf(TEXT("A - N = %.2f", Resta)));
	
	int32 ValorNumerico = static_cast<int32>(C[0]);
	MostrarMensaje(FString::Printf(TEXT("Valor Numérico C = %d", ValorNumerico)));
	
}

void AE01_DP::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, Color, Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
	
}


// Called every frame
void AE01_DP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

