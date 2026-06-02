
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_15_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_15_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	AEjercicio_15_JCV();
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);
	
//Ejer 15.1
	int32 A = 1;
	int32 B = 2;
	int32 C = 3;
	int32 D = 4;
//Ejer 15.1
	
//Ejer 15.2
	int32 Numero = FMath::RandRange(-1000,1000);
//Ejer 15.2
	
//Ejer 15.3
//Ejer 15.3
	
//Ejer 15.4
	int32 NumeroDeLaSuerte; 
	int32 Dia = 26;
	int32 Mes = 4;
	int32 Año = 2003;
//Ejer 15.4
	
//Ejer 15.5	
	int32 Cantidad = FMath::RandRange(-2,10);
	//Ejer 15.5	
protected:
	virtual void BeginPlay() override;


};
