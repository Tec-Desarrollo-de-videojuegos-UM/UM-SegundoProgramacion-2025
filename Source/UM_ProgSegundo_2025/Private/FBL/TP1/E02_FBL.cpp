// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E02_FBL.h"

// Sets default values
AE02_FBL::AE02_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AE02_FBL::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString::Printf(TEXT("Vida Actual = %d"),vida));
	
	int32 danioEfectivo = ataque - defensa;
	vida = vida - danioEfectivo;
	
	MostrarMensaje(FString::Printf(TEXT("Daño recibido = %d"),danioEfectivo));
	MostrarMensaje(FString::Printf(TEXT("Nueva vida = %d"),vida));
	
}

void AE02_FBL::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine-> AddOnScreenDebugMessage( -1 , 5,Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}


// Called every frame
void AE02_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

