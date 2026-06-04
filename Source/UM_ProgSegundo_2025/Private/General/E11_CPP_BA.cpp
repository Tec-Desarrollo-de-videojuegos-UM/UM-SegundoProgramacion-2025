// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E11_CPP_BA.h"
#include "General/E01_CPP_BA.h"

// Sets default values
AE11_CPP_BA::AE11_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE11_CPP_BA::BeginPlay()
{
	Super::BeginPlay();

	if (TieneLLave && !EstaMaldito)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El cofre se ha abierto"), FColor::Silver);
	}
	else if (!TieneLLave)
	{
		 AE01_CPP_BA::MostrarMensaje(TEXT("Te falta la llave"), FColor::Silver);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("Estas maldito"), FColor::Silver);
	}
	
}

// Called every frame
void AE11_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

