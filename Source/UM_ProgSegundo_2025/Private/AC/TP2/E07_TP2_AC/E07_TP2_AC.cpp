// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E07_TP2_AC/E07_TP2_AC.h"
#include "Kismet/GameplayStatics.h"
#include "InputCoreTypes.h"
#include "Engine/Engine.h"
void AE07_TP2_AC::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> Pawns;

	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(),
		APawn::StaticClass(),
		Pawns);

	if (Pawns.Num() >= 3)
	{
		Character1 = Cast<APawn>(Pawns[0]);
		Character2 = Cast<APawn>(Pawns[1]);
		Character3 = Cast<APawn>(Pawns[2]);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Green,TEXT("Personajes encontrados"));
		}
	}
}

void AE07_TP2_AC::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindKey(EKeys::One,IE_Pressed,this,&AE07_TP2_AC::PoseerCharacter1);

	InputComponent->BindKey(EKeys::Two,IE_Pressed,this,&AE07_TP2_AC::PoseerCharacter2);

	InputComponent->BindKey(EKeys::Three,IE_Pressed,this,&AE07_TP2_AC::PoseerCharacter3);
}

void AE07_TP2_AC::PoseerCharacter1()
{
	PoseerPawn(Character1);
}

void AE07_TP2_AC::PoseerCharacter2()
{
	PoseerPawn(Character2);
}

void AE07_TP2_AC::PoseerCharacter3()
{
	PoseerPawn(Character3);
}

void AE07_TP2_AC::PoseerPawn(APawn* PawnObjetivo)
{
	if (PawnObjetivo)
	{
		Possess(PawnObjetivo);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,2.0f,FColor::Yellow,TEXT("Cambio de personaje"));
		}
	}
}