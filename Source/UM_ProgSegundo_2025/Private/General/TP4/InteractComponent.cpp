// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP4/InteractComponent.h"

#include "General/TP4/InteractableActor.h"

// Sets default values for this component's properties
UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	
}

void UInteractComponent::IntentarInteractuar(AActor* Interactor)
{
	FVector Start = Interactor->GetActorLocation();
	FVector Forward = Interactor->GetActorForwardVector();
	FVector End = Start + (Forward * DistanciaInteraccion);
	
	FHitResult Hit;
	
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(Interactor);
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End, 
		ECC_Visibility,
		CollisionParams
	);
	
	if (bHit)
	{
		AInteractableActor *InteractableActor = Cast<AInteractableActor>(Hit.GetActor());
		if (InteractableActor)
		{
			InteractableActor->Interactuar(Interactor);
		}
		
	}
	
	
}
