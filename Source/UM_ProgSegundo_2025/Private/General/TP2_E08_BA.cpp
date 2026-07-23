// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E08_BA.h"

#include "Components/PointLightComponent.h"
#include "Kismet/GameplayStatics.h"

ATP2_E08_BA::ATP2_E08_BA()
{
	PrimaryActorTick.bCanEverTick =false;

	Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Raiz;

	BotonMesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BotonMesh"));
	BotonMesh->SetupAttachment(Raiz);
	BotonMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));

	CajaColision =CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	CajaColision->SetupAttachment(BotonMesh);
	CajaColision->SetBoxExtent(FVector(60.0f,60.0f,30.0f));
	CajaColision->SetRelativeLocation(FVector(0.0f,0.0f,40.0f));
}

void ATP2_E08_BA::BeginPlay()
{
	Super::BeginPlay();

	CajaColision->OnComponentBeginOverlap.AddDynamic(
	this,
			&ATP2_E08_BA::AlComenzarOverlap
		);
	
	
}

void ATP2_E08_BA::AlComenzarOverlap(
UPrimitiveComponent* OverlappedComponent,
AActor* OtherActor,
UPrimitiveComponent* OtherOverlappedComponent,
int32 OtherBodyIndex,
bool bFromSweep,
const FHitResult& SweepResult
)
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);

	if (OtherActor==PlayerPawn)
	{
		AlternarLuces();
	}
}

void ATP2_E08_BA::AlternarLuces()
{
	for (APointLight* Luz :ArrayLuces)
	{
		if (!Luz)
		{
			continue;
		}

		UPointLightComponent* ComponenteLuz = Luz->PointLightComponent;

		if (!ComponenteLuz)
		{
			continue;
		}

		ComponenteLuz->ToggleVisibility();

		if (Luz->ActorHasTag(TEXT("Rojo")))
		{
			ComponenteLuz->SetLightColor(FLinearColor::Red);
		}
		else if (Luz->ActorHasTag(TEXT("Azul")))
		{
			ComponenteLuz->SetLightColor(FLinearColor::Blue);
		}
	}
}

