// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP1/E08_FBL.h"

// Sets default values
AE08_FBL::AE08_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE08_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void AE08_FBL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AE08_FBL::Resultado()
{
	for (int32 i = 0; i < 10; ++i)
	{
		Guerreros.Add(VidaInicial);
	}
	while (Rondas <=5)
	{
		GEngine->AddOnScreenDebugMessage(
	   -1,
	   10.f,
	   FColor::Green,
	   TEXT("Ronda: ") + FString::FromInt(Rondas));
		
		for (int32 i = 0; i < Guerreros.Num(); ++i)
		{
			int32 Danio = FMath::RandRange(10,40);
			Guerreros[i] -= Danio;
			if (Guerreros[i] < 0) //Evita vida negativa
			{
				Guerreros[i]= 0;
			}
			GEngine->AddOnScreenDebugMessage(
				-1,
				10.f,
				FColor::Green,
				TEXT("Guerrero ")
				+ FString::FromInt(i + 1)
				+ TEXT(" recibio ")
				+ FString::FromInt(Danio)
				+ TEXT(" de daño. Vida actual: ")
				+ FString::FromInt(Guerreros[i]));
		}
		
		Rondas++;
	}
	
	//Resultado fina
	GEngine->AddOnScreenDebugMessage(
		-1,
		20.f,
		FColor::Cyan,
		TEXT("RESULTADOS FINALES:")
	);
	for (int i = 0; i < Guerreros.Num(); ++i)
	{
		if (Guerreros[i] > 0)
		{
			GEngine->AddOnScreenDebugMessage(
			-1,
			20.f,
			FColor::Green,
			TEXT("Guerrero ")
			+ FString::FromInt(i + 1)
			+ TEXT(" sobrevivio con ")
			+ FString::FromInt(Guerreros[i])
			+ TEXT(" de vida"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				20.f,
				FColor::Red,
				TEXT("Guerrero ")
				+ FString::FromInt(i + 1)
				+ TEXT(" fue eliminado")
			);
		}
	}
	
}

