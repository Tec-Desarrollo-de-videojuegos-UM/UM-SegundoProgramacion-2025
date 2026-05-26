// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E06_FBL.generated.h"

UCLASS()
class UM_PROGSEGUNDO_2025_API AE06_FBL : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AE06_FBL();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Guerreros;
	
	UFUNCTION(BlueprintCallable, Category = "Nombres")
	FString CiclosNombres();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
