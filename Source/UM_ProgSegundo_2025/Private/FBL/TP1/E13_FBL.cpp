// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E13_FBL.h"

// Sets default values
AE13_FBL::AE13_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE13_FBL::BeginPlay()
{
	Super::BeginPlay();
	
	FString InfoCliente =
	NombreCliente
	+ TEXT(" Nivel: ")
	+ FString::FromInt(Nivel)
	+ TEXT(" Reputacion: ")
	+ FString::FromInt(Reputacion);

	if (EsMiembroGremio)
	{
		if (Nivel >=50 && Reputacion >= 80)
		{
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,
				 TEXT("Es Miembro ")+ InfoCliente);
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,TEXT("Descuento del 50%"));
		}
		else if (Nivel >=50 || Reputacion >= 80)
		{
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,
				 TEXT("Es Miembro ")+ InfoCliente);
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,TEXT("Descuento del 30%"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,
				 TEXT("Es Miembro ")+ InfoCliente);
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,TEXT("No hay Descuento"));
		}
	}
	else 
	{
		if (Reputacion >= 70)
		{
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,
				TEXT("NO es Miembro   ")+ InfoCliente);
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,TEXT("Descuento del 15%"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,
				 TEXT("NO es Miembro   ")+ InfoCliente);
			GEngine->AddOnScreenDebugMessage(-1,10.f,FColor::Green,TEXT("No puedes comprar"));
		}
	}
}

// Called every frame
void AE13_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

