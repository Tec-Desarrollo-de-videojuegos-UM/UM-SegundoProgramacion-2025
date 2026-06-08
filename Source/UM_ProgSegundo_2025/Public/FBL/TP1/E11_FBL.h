// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E11_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE11_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE11_FBL();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	bool TieneLlave = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	bool EstaMaldito = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreJugador = "Nombre";

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
