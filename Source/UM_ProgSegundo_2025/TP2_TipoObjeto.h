#pragma once

#include "CoreMinimal.h"
#include "TP2_TipoObjeto.generated.h"

UENUM(BlueprintType)
enum class ETP2_TipoObjeto : uint8
{
	Cubo UMETA(DisplayName = "Cubo"),
	Esfera UMETA(DisplayName = "Esfera"),
	Cilindro UMETA(DisplayName = "Cilindro")
};