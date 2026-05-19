// Fill out your copyright notice in the Description page of Project Settings.


#include "General/Vitalidad.h"

#include "Runtime/CoreUObject/Tests/UObject/PropertyStateTrackingTest.h"

void UVitalidad::BeginPlay()
{
	Super::BeginPlay();
	
	Vida = VidaMaxima;
	
}

FString UVitalidad::RecibirDamageMensaje(int32 Damage)
{
	Vida -= Damage;
	return FString::Printf(TEXT("Vida actual: %d"), Vida);
}

/*
%d   // entero: int32
%f   // número decimal/flotante: float o double
%s   // texto/string
%u   // entero sin signo
*/

void UVitalidad::RecibirDamage(int32 Damage)
{
	Vida -= Damage;
	
	
	if (Vida < 0 ) 

		/* < menor que
		 == igual a	
		 != distinto de
		 > mayor que
	     >= mayor o igual <= menor o igual
		*/ 
			
		{
		Vida = 0;
		}
	
	
	//AND OR NOT
	
	/*if (Vida < 0 || Vida > 50 ) // la vida es menor a cero o la vida es mayor a 50
	{
	}
	
	if (Vida < 25 && Vida > 0) // la vida es menor a cero y la vida es mayor a 50
	{
	}
	
	if (!bIsActive) // no esta activo
	{
	}
	*/

	
	GEngine->AddOnScreenDebugMessage(
			-1,
			2.0f,
			FColor::Orange,
			FString::Printf(TEXT("Vida actual: %d"), Vida)
		);
	
	
	// ciclo bucle for (repetir codigo una cantidad determinada de veces)
	for (int32 i = 0; i < 10; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Número: %d"),i);
	}
	
	// while repetir codigo mientras una condicion sea verdadera
	
	while (Poder <= 1010)
	{
		UE_LOG(LogTemp, Warning, TEXT("Poder: %f"),Poder);
		Poder++;
	}
	
	
	
}






