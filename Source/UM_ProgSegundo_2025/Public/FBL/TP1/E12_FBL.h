// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E12_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE12_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE12_FBL();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreViajero;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 Nivel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
    bool TienePase;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
    bool EstaMaldito;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
