// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E06_CPP_BA.h"

// Sets default values
AE06_CPP_BA::AE06_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE06_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	Guerreros.Add(Guerrero1);
	Guerreros.Add(Guerrero2);
	Guerreros.Add(Guerrero3);
	Guerreros.Add(Guerrero4);
	Guerreros.Add(Guerrero5);

	for (const FString& element : Guerreros)
	{
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Green,FString::Printf((TEXT("Guerrero listo para combate: %s")), *element));
	}
	GEngine->AddOnScreenDebugMessage(-1,5,FColor::Green,TEXT("Todos los guerreros estan listos"));
	
}

// Called every frame
void AE06_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

