// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E14_AC/E14_AC.h"

// Sets default values
AE14_AC::AE14_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE14_AC::BeginPlay()
{
	Super::BeginPlay();
	FString Categoria = ObtenerCategoria(80,80,80,80,false);

	MostrarMensaje(
		FString::Printf(TEXT("Campeon: %s - Categoria: %s"),*NombreCampeon,*Categoria),FColor::Yellow);
}

FString AE14_AC::ObtenerCategoria(
	int32 Fuerza,int32 Agilidad,int32 Magia,
	int32 Reputacion,bool EstaDescalificado)
{
	if (EstaDescalificado)
	{
		return TEXT("DESCALIFICADO");
	}

	if (Fuerza >= 90 &&
		Agilidad >= 80 &&
		Magia >= 70 &&
		Reputacion >= 90)
	{
		return TEXT("LEGENDARIO");
	}

	if (Fuerza >= 75 &&
		Agilidad >= 70 &&
		(Magia >= 60 || Reputacion >= 80))
	{
		return TEXT("ORO");
	}

	if ((Fuerza >= 60 || Agilidad >= 60) &&
		Reputacion >= 50)
	{
		return TEXT("PLATA");
	}

	if (Fuerza >= 40 ||
		Agilidad >= 40 ||
		Magia >= 40)
	{
		return TEXT("BRONCE");
	}

	return TEXT("SIN CLASIFICAR");
}
void AE14_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE14_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

