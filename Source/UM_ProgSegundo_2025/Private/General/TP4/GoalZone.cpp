// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP4/GoalZone.h"

#include "General/E01_CPP_BA.h"
#include "Kismet/GameplayStatics.h"
#include "LevelInstance/LevelInstanceTypes.h"

// Sets default values
AGoalZone::AGoalZone()
{
	PrimaryActorTick.bCanEverTick =false;

	USceneComponent* Root =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent = Root;

	StaticMesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
	StaticMesh->SetupAttachment(Root);
	StaticMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));

	Colision =CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	Colision->SetupAttachment(Root);

}

void AGoalZone::BeginPlay()
{
	Super::BeginPlay();
	Colision->OnComponentBeginOverlap.AddDynamic(this, &AGoalZone::OnOverlapSomething);
	
}

void AGoalZone::OnOverlapSomething(UPrimitiveComponent* OverlappedComponent, 
                                   AActor* OtherActor,
                                   UPrimitiveComponent* OtherOverlappedComponent,
                                   int32 OtherBodyIndex,
                                   bool bFromSweep,
                                   const FHitResult& SweepResult)
{
	if (bNivelCompleto)
	{
		return;
	}
	if (OtherActor == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
	{
		AE01_CPP_BA::MostrarMensaje("jugador completo nivel", FColor::Green);
		UDisplayShow* Widget = CreateWidget<UDisplayShow>(GetWorld(), WidgetClass);
		if (Widget)
		{
			Widget->DisplayMessage = DisplayMessage;
			Widget->ColorMessage = ColorMessage;
			Widget->AddToViewport();
		}
		bNivelCompleto = true;
	}
	else
	{
		AE01_CPP_BA::MostrarMensaje("overlap sin jugador", FColor::Red);
	}
}
