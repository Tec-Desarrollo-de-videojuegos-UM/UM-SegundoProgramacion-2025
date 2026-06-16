// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E08_TP2_AC/E08_TP2_AC.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PointLightComponent.h"

// Sets default values
AE08_TP2_AC::AE08_TP2_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Raiz = CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent = Raiz;

	BotonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BotonMesh"));
	BotonMesh->SetupAttachment(Raiz);
	BotonMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f));

	CajaColision = CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	CajaColision->SetupAttachment(BotonMesh);
	CajaColision->SetBoxExtent(FVector(60.0f, 60.0f, 30.0f));
	CajaColision->SetRelativeLocation(FVector(0.0f, 0.0f, 40.0f));

}

// Called when the game starts or when spawned
void AE08_TP2_AC::BeginPlay()
{
	Super::BeginPlay();
	
	CajaColision->OnComponentBeginOverlap.AddDynamic(
		this,
		&AE08_TP2_AC::AlComenzarOverlap
	);
}

void AE08_TP2_AC::AlComenzarOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (OtherActor == PlayerPawn)
	{
		AlternarLuces();
	}
}

void AE08_TP2_AC::AlternarLuces()
{
	for (APointLight* Luz : ArrayLuces)
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
		else if (Luz->ActorHasTag(TEXT("Amarillo")))
		{
			ComponenteLuz->SetLightColor(FLinearColor::Yellow);
		}
		else if (Luz->ActorHasTag(TEXT("Verde")))
		{
			ComponenteLuz->SetLightColor(FLinearColor::Green);
		}
	}
}




