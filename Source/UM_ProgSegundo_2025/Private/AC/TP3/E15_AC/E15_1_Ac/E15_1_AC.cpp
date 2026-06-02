// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP3/E15_AC/E15_1_Ac/E15_1_AC.h"

// Sets default values
AE15_1_AC::AE15_1_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AE15_1_AC::BeginPlay()
{
	Super::BeginPlay();
	
	MostrarMensaje(FString::Printf(TEXT("Valores Iniciales -> A:%d B:%d C:%d D:%d"),A, B, C, D),FColor::Red);
	int32 AuxA = A;
	int32 AuxB = B;
	int32 AuxC = C;
	int32 AuxD = D;
	
	B= AuxC;
	C= AuxA;
	A= AuxD;
	D= AuxB;
	MostrarMensaje(FString::Printf(TEXT("Valores Finales -> A:%d B:%d C:%d D:%d"),A, B, C, D),FColor::Green);
}
void AE15_1_AC::MostrarMensaje(const FString Mensaje, FColor Color)
{
	if (GEngine)
	{
		static int32 MensajeID = 0;

		GEngine->AddOnScreenDebugMessage(MensajeID++,8.f,Color,Mensaje);
	}
}
// Called every frame
void AE15_1_AC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

