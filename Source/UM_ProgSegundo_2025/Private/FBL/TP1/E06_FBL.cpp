// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E06_FBL.h"

// Sets default values
AE06_FBL::AE06_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE06_FBL::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AE06_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AE06_FBL::CiclosNombres()
{
	Guerreros.Add(TEXT("Kratos"));
	Guerreros.Add(TEXT("Vergil"));
	Guerreros.Add(TEXT("Arthur"));
	
	for (const FString& Elemento :Guerreros)
	{
		GEngine->AddOnScreenDebugMessage(
	   -1,
	   5.f,
	   FColor::Green,
	   TEXT("Guerrero listo para combate: ") + Elemento);
	}
	return TEXT("Todos los guerreros están listos");
}

