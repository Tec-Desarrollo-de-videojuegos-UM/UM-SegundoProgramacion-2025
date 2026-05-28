// Fill out your copyright notice in the Description page of Project Settings.


#include "General/E08_CPP_BA.h"
#include  "General/E01_CPP_BA.h"

// Sets default values
AE08_CPP_BA::AE08_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE08_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	
	Guerreros.Empty();
	for (int i = 0; i < 10; ++i)
	{
		Guerreros.Add(VidaInicial);
	}
	int RondaActual = 0;
	while (Rondas > 0)
	{
		RondaActual ++;
		AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Ronda %i"), RondaActual), FColor::Cyan);
		
		for (int i = 0; i < Guerreros.Num(); ++i)
		{
			int32 Damage = FMath::RandRange(10, 40);
			Guerreros[i] = Guerreros[i] - Damage;
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Guerrero %i recibio %i de daño. Vida actual: %i"), i + 1, Damage, Guerreros[i]), FColor::Cyan);
		}
		Rondas--;
	}
	AE01_CPP_BA::MostrarMensaje(TEXT("Resultados Finales: "), FColor::Cyan);
	for (int i = 0; i < Guerreros.Num(); ++i)
	{
		if (Guerreros[i] > 0)
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Guerrero %i sobrevivio con %i"), i + 1, Guerreros[i] ), FColor::Cyan);
		}
		else
		{
			AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Guerrero %i fue eliminado"), i + 1), FColor::Cyan);
		}
	}
}



// Called every frame
void AE08_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

