// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E11_AC.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE11_AC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE11_AC();
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool TieneLlave = true;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool EstaMaldita = false;
	FString NombreJugador = TEXT("Aragon");
	void MostrarMensaje(const FString Mensaje, FColor Color = FColor::Cyan);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
