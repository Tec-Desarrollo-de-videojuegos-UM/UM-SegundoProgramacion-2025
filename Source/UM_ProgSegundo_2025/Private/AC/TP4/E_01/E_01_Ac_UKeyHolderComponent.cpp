// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP4/E_01/E_01_Ac_UKeyHolderComponent.h"

// Sets default values for this component's properties
UE_01_Ac_UKeyHolderComponent::UE_01_Ac_UKeyHolderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bTieneLlave = false;


}


// Called when the game starts
void UE_01_Ac_UKeyHolderComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UE_01_Ac_UKeyHolderComponent::RecibirLlave()
{
	if (bTieneLlave)
	{
		return;
	}


	bTieneLlave = true;


	AlRecibirLlave();
}

bool UE_01_Ac_UKeyHolderComponent::TieneLlave() const
{
	return bTieneLlave;
}

// Called every frame
void UE_01_Ac_UKeyHolderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

