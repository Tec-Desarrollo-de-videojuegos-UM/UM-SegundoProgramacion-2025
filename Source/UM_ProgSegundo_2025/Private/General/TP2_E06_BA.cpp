// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E06_BA.h"

void ATP2_E06_BA::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindKey(EKeys::One, IE_Pressed, this, &ATP2_E06_BA::PossessCharacter1);
	InputComponent->BindKey(EKeys::Two, IE_Pressed, this, &ATP2_E06_BA::PossessCharacter2);
	InputComponent->BindKey(EKeys::Three, IE_Pressed, this, &ATP2_E06_BA::PossessCharacter3);
	
}

void ATP2_E06_BA::PossessCharacter1()
{
	PossessPawn(Character1);
}
void ATP2_E06_BA::PossessCharacter2()
{
	PossessPawn(Character2);
}
void ATP2_E06_BA::PossessCharacter3()
{
	PossessPawn(Character3);
}

void ATP2_E06_BA::PossessPawn(APawn* PawnObjeto)
{
	if (PawnObjeto)
	{
		Possess(PawnObjeto);
	}
}