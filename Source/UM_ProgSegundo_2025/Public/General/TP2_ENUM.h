// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"CoreMinimal.h"
#include"TP2_ENUM.generated.h"

UENUM(BlueprintType)
enum class ETP2_ENUM : uint8
{
	Cubo UMETA(DisplayName ="Cubo"),
	Esfera UMETA(DisplayName ="Esfera"),
	Cilindro UMETA(DisplayName ="Cilindro")
};
