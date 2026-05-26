// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E01_AC/EJ_1.h"
#include "Engine/Engine.h"

// Sets default values
AEJ_1::AEJ_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEJ_1::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString :: Printf(TEXT("Numero = %d"), Numero));
	MostrarMensaje(FString :: Printf(TEXT("A = %.2f"), A));
	MostrarMensaje(FString :: Printf(TEXT("C = %s"), *C));
	
	float Suma = Numero + A;
	float Resta = A - Numero;
	MostrarMensaje(FString::Printf(TEXT("Numero + A = %.2f"), Suma));
	MostrarMensaje(FString::Printf(TEXT("A - Numero = %.2f"), Resta));
	
	int32 valornumerico = static_cast<int32>(C[0]);
	MostrarMensaje(FString :: Printf(TEXT("Valor Numerico = %d"), valornumerico));
	
	
}

void AEJ_1 :: MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5F, Color, Mensaje);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
	
}


// Called every frame
void AEJ_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

