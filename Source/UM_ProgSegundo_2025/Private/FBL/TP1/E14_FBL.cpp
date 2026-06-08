// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E14_FBL.h"

// Sets default values
AE14_FBL::AE14_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE14_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AE14_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

 FString AE14_FBL::ObtenerCategoria(int32 Fuerza, int32 Agilidad, int32 Magia, int32 Reputacion, bool EstaDescalificado)
{
	if (!EstaDescalificado)
	{
		if (Fuerza >=90 && Agilidad >=80 && Magia >=70 && Reputacion >=90 )
		{
		return TEXT("LEGENDARIO");
		}
		if (Fuerza >=75 && Agilidad >=70 && (Magia >=60 || Reputacion >=80 ))
		{
			return TEXT("ORO");
		}
		if ((Fuerza >=60 || Agilidad >=60) && Reputacion >=50 )
		{
			return TEXT("PLATA");
		}
		if (Fuerza >=40 || Agilidad >=40 || Magia >=40 )
		{
			return TEXT("BRONCE");
		}
		
		return TEXT("SIN CLASIFICAR");
		
	}
	return TEXT("DESCALIFICADO");
	
}

