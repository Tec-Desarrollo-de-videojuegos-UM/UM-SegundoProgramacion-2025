// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E10_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE10_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE10_FBL();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreAventuredo1 = TEXT("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 NivelAventuredo1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreAventuredo2 = TEXT("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 NivelAventuredo2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	FString NombreAventuredo3= TEXT("");
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caracteristica")
	int32 NivelAventuredo3;
	
	UFUNCTION(BlueprintCallable, Category = "Categorías")
	FString ConstruirSaludo(FString NombreAventurero, int32 Nivel);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
