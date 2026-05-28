// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E07_CPP_BA.h"

// Sets default values
AE07_CPP_BA::AE07_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE07_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	while (Contador >= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::Printf(TEXT("Lanzamiento en: %i"), Contador));
		Contador --;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow,TEXT("Despegue!"));
	
}

// Called every frame
void AE07_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

