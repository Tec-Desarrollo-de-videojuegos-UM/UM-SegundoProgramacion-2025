// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_14_JCV.h"

// Sets default values
AEjercicio_14_JCV::AEjercicio_14_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_14_JCV::BeginPlay()
{
	Super::BeginPlay();
	ObtenerCategoria("Legolas",FMath::RandRange(0,200), FMath::RandRange(0,200), FMath::RandRange(0,200), FMath::RandRange(0,200),false);
}

void AEjercicio_14_JCV::ObtenerCategoria(FString NombreCampeon, int32 Fuerza, int32 Agilidad, int32 Magia, int32 Reputacion, bool EstaDescalificado)
{
	if (!EstaDescalificado)
	{
		if (Fuerza>=90 && Agilidad >=80 && Magia >= 70 && Reputacion >= 90)
		{
			MostrarMensaje(FString::Printf(TEXT("%s es LEGENDARIO!"), *NombreCampeon), FColor::Green);
		}else if (Fuerza>=75 && Agilidad >=70 && (Magia >= 60 || Reputacion >= 80))
		{
				MostrarMensaje(FString::Printf(TEXT("%s es ORO!"), *NombreCampeon), FColor::Green);
		}else if ((Fuerza>=60 || Agilidad >=60) && Reputacion >= 50)
		{
			MostrarMensaje(FString::Printf(TEXT("%s es PLATA!"), *NombreCampeon), FColor::Green);
		}else if (Fuerza>=40 || Agilidad >=40 || Magia >= 40)
		{
			MostrarMensaje(FString::Printf(TEXT("%s es BRONCE!"), *NombreCampeon), FColor::Green);
		}else
		{
			MostrarMensaje(FString::Printf(TEXT("%s NO clasificado"), *NombreCampeon), FColor::Red);
			
		}
		
		
	}else{
		MostrarMensaje(FString::Printf(TEXT("%s esta descalificado"), *NombreCampeon), FColor::Red);
	}
}

void AEjercicio_14_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}