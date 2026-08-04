// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "E_01_Ac_UKeyHolderComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UM_PROGSEGUNDO_2025_API UE_01_Ac_UKeyHolderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UE_01_Ac_UKeyHolderComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Llave", meta=(AllowPrivateAccess="true"))
	bool bTieneLlave;
public:

	// El jugador recibe la llave
	UFUNCTION(BlueprintCallable, Category="Llave")
	void RecibirLlave();

	// Consulta si tiene la llave
	UFUNCTION(BlueprintPure, Category="Llave")
	bool TieneLlave() const;

	// Evento para Blueprint
	UFUNCTION(BlueprintImplementableEvent, Category="Llave")
	void AlRecibirLlave();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
