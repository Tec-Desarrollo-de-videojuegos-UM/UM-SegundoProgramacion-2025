// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E08_AC/E08_AC.h"

// Sets default values
AE08_AC::AE08_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE08_AC::BeginPlay()
{
	for (int32 i = 0; i < 10; i++)
	{
		Guerreros.Add(VidaInicial);
	}
	for (int32 i = 1; i <= Ordas; i++)
	{
		MostrarMensaje(
			FString::Printf(TEXT("======= Ronda %d ======="),i),FColor::Yellow);

		
		for (int32 j = 0; j < Guerreros.Num(); j++)
		{
			
			int32 Danio = FMath::RandRange(10, 40);

			
			Guerreros[j] -= Danio;

			
			if (Guerreros[j] < 0)
			{
				Guerreros[j] = 0;
			}

			
			MostrarMensaje(FString::Printf(TEXT("Guerrero %d recibio %d de dano. Vida actual: %d"),j + 1,Danio,
				Guerreros[j]),FColor::Green);
		}
	}

	
	MostrarMensaje(TEXT("===== Resultados Finales ====="),FColor::Red);

	
	for (int32 i = 0; i < Guerreros.Num(); i++)
	{
		if (Guerreros[i] > 0)
		{
			MostrarMensaje(FString::Printf(TEXT("Guerrero %d sobrevivio con %d de vida"),i + 1,Guerreros[i]),
				FColor::Blue);
		}
		else
		{
			MostrarMensaje(FString::Printf(TEXT("Guerrero %d fue eliminado"),i + 1),FColor::Red);
		}
	}
}

void AE08_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE08_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

