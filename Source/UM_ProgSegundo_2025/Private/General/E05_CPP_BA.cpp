// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E05_CPP_BA.h"

// Sets default values
AE05_CPP_BA::AE05_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE05_CPP_BA::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 10; ++i)
	{
		if (i%2 == 0)
		{
			MonedasOro += 1;
			ValorTotal += 10;
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Purple, TEXT("Moneda de oro, suma 10"));
		}
		else
		{
			MonedasOro += 1;
			ValorTotal += 5;
			GEngine->AddOnScreenDebugMessage(-1,5,FColor::Purple, TEXT("Monedas de plata, suma 5"));
		}
	}
	
	GEngine->AddOnScreenDebugMessage(-1,5,FColor::Purple, FString::Printf(TEXT("Monedas de oro: %i"), MonedasOro));
	GEngine->AddOnScreenDebugMessage(-1,5,FColor::Purple, FString::Printf(TEXT("Monedas de plata: %i"), MonedasPlata));
	GEngine->AddOnScreenDebugMessage(-1,5,FColor::Purple, FString::Printf(TEXT("Valor total: %i"), ValorTotal));
	
	
}

// Called every frame
void AE05_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

