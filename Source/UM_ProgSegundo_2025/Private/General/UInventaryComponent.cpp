// Fill out your copyright notice in the Description page of Project Settings.


#include "General/UInventaryComponent.h"

#include "IDetailTreeNode.h"
#include "General/AItemActor.h"

// Sets default values for this component's properties
UUInventaryComponent::UUInventaryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUInventaryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	
}


void UUInventaryComponent::AgregarItem(AAItemActor*Item)
{
	ArrayItemActors.Add(Item);
}

void UUInventaryComponent::MostrarCantidadElementosArray()
{
	
	for (int32 i=0; i<ArrayItemActors.Num(); i++)
	{
		AAItemActor*Item = ArrayItemActors[i];
		GEngine->AddOnScreenDebugMessage(-1,5.0f, FColor::Green,FString::Printf(TEXT("[%d] %s x %.1f"), i, *ArrayItemActors[i]->NombreItem,ArrayItemActors[i]->Cantidad));
	}
	
}


// Called every frame
void UUInventaryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

