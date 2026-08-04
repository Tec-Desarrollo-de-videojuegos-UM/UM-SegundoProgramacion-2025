// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP4/KeyItem.h"

#include "AssetTypeActions/AssetDefinition_SoundBase.h"
#include "General/TP4/KeyHolder.h"
#include "Kismet/GameplayStatics.h"
#include "LevelInstance/LevelInstanceTypes.h"

AKeyItem::AKeyItem()
{
	PrimaryActorTick.bCanEverTick =false;

	Root =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Root;

	Mesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
	Mesh->SetupAttachment(Root);
	Mesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));

	CajaColision =CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	CajaColision->SetupAttachment(Root);
	CajaColision->SetBoxExtent(FVector(60.0f,60.0f,30.0f));
	CajaColision->SetRelativeLocation(FVector(0.0f,0.0f,40.0f));

}

void AKeyItem::BeginPlay()
{
	Super::BeginPlay();
	
	CajaColision->OnComponentBeginOverlap.AddDynamic(this, &AKeyItem::OnOverlapSomething);
}

void AKeyItem::OnOverlapSomething(UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor,
	UPrimitiveComponent* OtherOverlappedComponent,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (bAlreadyCollected)
	{
		return;
	}
	if (OtherActor == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
	{
		UKeyHolder* KeyHolder = OtherActor->FindComponentByClass<UKeyHolder>();
		if (KeyHolder)
		{
			KeyHolder->SetKey(true);
			bAlreadyCollected = true;
			HideKey();
			
			UDisplayShow* Widget = CreateWidget<UDisplayShow>(GetWorld(), DisplayMessageClass);
			if (Widget)
			{
				Widget->DisplayMessage = tCollectMessage;
				Widget->ColorMessage = cColorMessage;
				Widget->AddToViewport();
			}
			
			if (sCollectSound)
			{
				UGameplayStatics::PlaySound2D(this, sCollectSound);
			}
		}			
	}
}

void AKeyItem::HideKey()
{
	Mesh->DestroyComponent();
}


