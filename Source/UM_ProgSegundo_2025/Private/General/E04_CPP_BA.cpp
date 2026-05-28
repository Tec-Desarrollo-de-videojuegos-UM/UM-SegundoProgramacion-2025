// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E04_CPP_BA.h"

// Sets default values
AE04_CPP_BA::AE04_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE04_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	Numero = FMath::RandRange(0, 10);
	int32 resto = Numero%2;
	
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("El numero es: %d"), Numero));
	
	
	if (resto == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Es par"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, TEXT("Es impar"));
	}
}

// Called every frame
void AE04_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

