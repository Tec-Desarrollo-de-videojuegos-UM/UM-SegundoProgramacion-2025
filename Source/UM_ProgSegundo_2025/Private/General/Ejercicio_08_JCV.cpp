// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Ejercicio_08_JCV.h"

// Sets default values
AEjercicio_08_JCV::AEjercicio_08_JCV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercicio_08_JCV::BeginPlay()
{
    
	Guerreros.Init(100, 10); 

	for (int32 Ronda = 1; Ronda <= 5; ++Ronda)
	{
		MostrarMensaje(FString::Printf(TEXT("--- Ronda %d ---"), Ronda), FColor::Red);
		
        
		for (int32 i = 0; i < Guerreros.Num(); ++i)
		{
			if (Guerreros[i] > 0) 
			{
				int32 Daño = FMath::RandRange(10, 40);
                
				Guerreros[i] = FMath::Max(0, Guerreros[i] - Daño); 
                
				MostrarMensaje(FString::Printf(TEXT("Guerrero %d recibio %d de daño. Vida actual: %d"), i + 1, Daño, Guerreros[i]), FColor::Cyan);
				
			}
		}
	}

	MostrarMensaje(FString::Printf(TEXT("--- Resultados finales ---")), FColor::Red);
	
    
	for (int32 i = 0; i < Guerreros.Num(); ++i)
	{
		if (Guerreros[i] > 0)
		{
			MostrarMensaje(FString::Printf(TEXT("Guerrero %d sobrevivio con %d de vida"), i + 1, Guerreros[i]), FColor::Green);
		}
		else
		{
			MostrarMensaje(FString::Printf(TEXT("Guerrero %d fue eliminado"), i + 1), FColor::Yellow);
		}
	}
}

// Called every frame
void AEjercicio_08_JCV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEjercicio_08_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}