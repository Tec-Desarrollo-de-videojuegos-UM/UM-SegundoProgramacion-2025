

#include "General/Ejercicio_15_JCV.h"

AEjercicio_15_JCV::AEjercicio_15_JCV()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEjercicio_15_JCV::BeginPlay()
{
	Super::BeginPlay();
	//Ejer 15.1
		MostrarMensaje(FString::Printf(TEXT("A = %d B = %d C = %d D = %d"), A, B, C ,D), FColor::Green);
		int32 x = B;
		B = C;
		C = A;
		A = D;
		D = x;
		
		MostrarMensaje(FString::Printf(TEXT("A = %d B = %d C = %d D = %d"), A, B, C ,D), FColor::Yellow);
	//Ejer 15.1
	//Ejer 15.2
		if (Numero>=0)
		{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es Positivo"), Numero), FColor::Yellow);
		}
		else
		{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es Negativo"), Numero), FColor::Red);
		}
	//Ejer 15.2
	
	//Ejer 15.3
	
	if (Numero % 2)
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es Par"), Numero), FColor::Yellow);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es Impar"), Numero), FColor::Red);
	}
	if (Numero % 5)
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es multiplo de 5"), Numero), FColor::Yellow);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d NO es multiplo de 5"), Numero), FColor::Red);
	}
	if (Numero % 10)
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es multiplo de 10"), Numero), FColor::Yellow);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d NO es multiplo de 10"), Numero), FColor::Red);
	}
	if (Numero > 100)
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es mayor que 100"), Numero), FColor::Yellow);
	}
	else
	{
		MostrarMensaje(FString::Printf(TEXT("El numero %d es menor que 100"), Numero), FColor::Red);
	}
	//Ejer 15.3
	
	//Ejer 15.4
	int32 y = Dia + Mes + Año;
		MostrarMensaje(FString::Printf(TEXT("Cumpleaños = %d/%d/%d"), Dia, Mes, Año), FColor::Green);
	while (y>0)
	{
		NumeroDeLaSuerte += y % 10;
		y /= 10;
	}
		MostrarMensaje(FString::Printf(TEXT("Tu numero de la suerte es = %d"), NumeroDeLaSuerte), FColor::Green);
	//Ejer 15.4
	
	//Ejer 15.5	
	
	if (Cantidad > 0)
	{
		int32 Anterior = 0;
		int32 Actual = 1;
		for (int i = 1; i <= Cantidad; i++)
		{
			MostrarMensaje(FString::Printf(TEXT("Valor Anterior = %d"), Anterior), FColor::Green);
			int32 Siguiente = Anterior + Actual;
			Anterior = Actual;
			Actual = Siguiente;
		}
		
	}
	else
	{
			MostrarMensaje(FString::Printf(TEXT("Valor da error")), FColor::Red);
		
	}
	//Ejer 15.5	
	
}

void AEjercicio_15_JCV::MostrarMensaje(const FString& Mensaje, FColor Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, Color, Mensaje);
	}
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
}