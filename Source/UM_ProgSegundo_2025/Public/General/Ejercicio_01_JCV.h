
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercicio_01_JCV.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AEjercicio_01_JCV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercicio_01_JCV();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	int32 N = 5;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	float A = 4.56f;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ejercicio")
	FString C = TEXT("A");
	
	void MostrarMensaje(const FString& Mensaje, FColor Color);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};