// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E05_FBL.h"

// Sets default values
AE05_FBL::AE05_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE05_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AE05_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AE05_FBL::Ciclos()
{
	for (int32 i = 1; i <= 10; ++i)
	{
		if (i%2==0)
		{
			MonedasOro++;
			ValorTolal +=10;
		}
		else
		{
			MonedasPlata++;
			ValorTolal +=5;
		}
	}
	return TEXT("Monedas de Oro: ") + FString::FromInt(MonedasOro)
			+TEXT(" |  Monedas de Plata: ") + FString::FromInt(MonedasPlata)
			+TEXT(" |  Valor Total: ") + FString::FromInt(ValorTolal);
}
