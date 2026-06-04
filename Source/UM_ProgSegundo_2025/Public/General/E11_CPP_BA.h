// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E11_CPP_BA.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE11_CPP_BA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE11_CPP_BA();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleanos")
	bool TieneLLave;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleanos")
	bool EstaMaldito;
	
	FString Nombre = "Boriz";
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
