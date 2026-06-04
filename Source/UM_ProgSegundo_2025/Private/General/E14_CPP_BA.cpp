// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E14_CPP_BA.h"
#include "General/E01_CPP_BA.h"

// Sets default values
AE14_CPP_BA::AE14_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE14_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	//Esta descalificado
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Boriz",90, 90, 90, 90, true), FColor::Orange);
	//Legendario
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Mipha",90, 90, 90, 90, false), FColor::Orange);
	//Oro
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Urbosa",75, 70, 60, 0, false), FColor::Orange);
	//Plata
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Revali",60, 0, 0, 50, false), FColor::Orange);
	//Bronce
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Daruk",0, 40, 0, 0, false), FColor::Orange);
	//No clasifica
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria("Zelda", 0, 0, 0, 0, false), FColor::Orange);
	//ActualCampeon
	AE01_CPP_BA::MostrarMensaje(ObtenerCategoria(ActualNombreCampeon, ActualFuerza, ActualAgilidad, ActualMagia, ActualReputacion, ActualEstaDescalificado), FColor::Orange);
	
	
}

FString AE14_CPP_BA::ObtenerCategoria(const FString& NombreCampeon, int32 Fuerza, int32 Agilidad, int32 Magia, int32 Reputacion, bool EstaDescalificado)
{
	if (EstaDescalificado)
	{
		return FString::Printf(TEXT("Campeon %s esta descalificado"), *NombreCampeon);
	}
	else if (Fuerza >= 90 && Agilidad >= 80 && Magia >= 70 && Reputacion >= 90)
	{
		return FString::Printf(TEXT("Campeon %s es Legendario"), *NombreCampeon);
	}
	else if (Fuerza >= 75 && Agilidad >= 70 && (Magia >= 60 || Reputacion >= 90))
	{
		return FString::Printf(TEXT("Campeon %s es Oro"), *NombreCampeon);
	}
	else if ((Fuerza >= 60 || Agilidad >= 60) && Reputacion >= 50)
	{
		return FString::Printf(TEXT("Campeon %s es Plata"), *NombreCampeon);
	}
	else if ((Fuerza >= 40 || Agilidad >= 40) || Magia >= 40)
	{
		return FString::Printf(TEXT("Campeon %s es Bronce"), *NombreCampeon);
	}
	else
	{
		return FString::Printf(TEXT("Campeon %s no se clasifico"), *NombreCampeon);
	}
}

// Called every frame
void AE14_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

