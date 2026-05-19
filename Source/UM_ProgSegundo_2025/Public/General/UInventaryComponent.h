// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UInventaryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UUInventaryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUInventaryComponent();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Propiedades")
	TArray<AAItemActor*> ArrayItemActors; 
	
	UFUNCTION(BlueprintCallable, Category="Propiedades")
	void AgregarItem(AAItemActor*Item);
	
	UFUNCTION(BlueprintCallable, Category="Propiedades")
	void MostrarCantidadElementosArray();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
