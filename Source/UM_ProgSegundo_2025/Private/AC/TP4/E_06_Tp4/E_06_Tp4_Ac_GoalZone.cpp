// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP4/E_06_Tp4/E_06_Tp4_Ac_GoalZone.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"

// Sets default values
AE_06_Tp4_Ac_GoalZone::AE_06_Tp4_Ac_GoalZone()
{
	PrimaryActorTick.bCanEverTick = false;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;

	BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	BoxCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	bNivelCompletado = false;

}

// Called when the game starts or when spawned
void AE_06_Tp4_Ac_GoalZone::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(
		this,
		&AE_06_Tp4_Ac_GoalZone::OnGoalOverlap);
	
}
void AE_06_Tp4_Ac_GoalZone::OnGoalOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (bNivelCompletado)
	{
		return;
	}

	if (OtherActor == nullptr)
	{
		return;
	}

	ACharacter* Player = Cast<ACharacter>(OtherActor);

	if (Player)
	{
		bNivelCompletado = true;

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Green,
				TEXT("¡Nivel Completado!"));
		}

		EventoNivelCompletado();
	}
}
