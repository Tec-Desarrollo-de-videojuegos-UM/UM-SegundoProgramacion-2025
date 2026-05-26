// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E01_FBL.h"

// Sets default values
AE01_FBL::AE01_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE01_FBL::BeginPlay()
{
	Super::BeginPlay();
	MostrarMensaje(FString::Printf(TEXT("N = %d"),N));
	MostrarMensaje(FString::Printf(TEXT("A = %.2f"),A));
	MostrarMensaje(FString::Printf(TEXT("C = %s"),*C));
	
	float suma = N+A;
	float resta = A-N;
	
	MostrarMensaje(FString::Printf(TEXT("N + A = %.2f"),suma));
	MostrarMensaje(FString::Printf(TEXT("A - N = %.2f"),resta));
	
	int32 valorC = static_cast<int32>(C[0]);
	MostrarMensaje(FString::Printf(TEXT("Valor de C = %d"),valorC));
}

void AE01_FBL::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine-> AddOnScreenDebugMessage( -1 , 5,Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}

// Called every frame
void AE01_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

