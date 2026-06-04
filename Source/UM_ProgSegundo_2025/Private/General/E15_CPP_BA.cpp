// Fill out your copyright notice in the Description page of Project Settings.

#include  "General/E01_CPP_BA.h"
#include "General/E15_CPP_BA.h"

// Sets default values
AE15_CPP_BA::AE15_CPP_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_CPP_BA::BeginPlay()
{
	Super::BeginPlay();
	//E15.1
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor de A: %i"), A), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor de B: %i"), B), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor de C: %i"), C), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor de D: %i"), D), FColor::Red);
	
	int32 a = A;
	int32 b = B;
	int32 c = C;
	int32 d = D;
	
	B = c;
	C = a;
	A = d;
	D = b;
	
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor final de A: %i"), A), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor final de B: %i"), B), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor final de C: %i"), C), FColor::Red);
	AE01_CPP_BA::MostrarMensaje(FString::Printf(TEXT("Valor final de D: %i"), D), FColor::Red);
	
	//E15.2
	if (Numero >= 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es positivo"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es negativo"), FColor::Red);
	}
	
	//E15.3
	if (Numero2 >= 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es positivo"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es negativo"), FColor::Red);
	}
	if (Numero2 % 2 == 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es par"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es impar"), FColor::Red);
	}
	if (Numero2 % 5 == 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es multiplo de 5"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero no es multiplo de 5"), FColor::Red);
	}
	if (Numero2 % 10 == 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es multiplo de 10"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es no multiplo de 10"), FColor::Red);
	}
	if (Numero2 % 100 == 0)
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es multiplo de 100"), FColor::Red);
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje(TEXT("El numero es no es multiplo de 100"), FColor::Red);
	}
	
}

// Called every frame
void AE15_CPP_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

