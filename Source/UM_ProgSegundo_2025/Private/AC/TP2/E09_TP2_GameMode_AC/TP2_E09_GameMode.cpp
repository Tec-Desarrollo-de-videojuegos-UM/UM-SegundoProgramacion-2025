// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E09_TP2_GameMode_AC/TP2_E09_GameMode.h"

ATP2_E09_GameMode::ATP2_E09_GameMode()
{
}

void ATP2_E09_GameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.f,
			FColor::Green,
			TEXT("Game Mode TP2_E09 activo")
		);
	}
}