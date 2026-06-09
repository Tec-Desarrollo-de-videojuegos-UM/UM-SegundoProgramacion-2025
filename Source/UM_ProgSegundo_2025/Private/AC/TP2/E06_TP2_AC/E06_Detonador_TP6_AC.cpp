

#include "AC/TP2/E06_TP2_AC/E06_Detonador_TP6_AC.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"

AE06_Detonador_TP6_AC::AE06_Detonador_TP6_AC()
{
	PrimaryActorTick.bCanEverTick = false;

	Raiz = CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent = Raiz;

	BotonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BotonMesh"));
	BotonMesh->SetupAttachment(Raiz);
	BotonMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f));

	CajaColision = CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	CajaColision->SetupAttachment(BotonMesh);
	CajaColision->SetBoxExtent(FVector(50.0f, 50.0f, 20.0f));
	CajaColision->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
}

void AE06_Detonador_TP6_AC::BeginPlay()
{
	Super::BeginPlay();

	CajaColision->OnComponentBeginOverlap.AddDynamic(this,&AE06_Detonador_TP6_AC::AlComenzarOverlap);
}

void AE06_Detonador_TP6_AC::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
}

void AE06_Detonador_TP6_AC::AlComenzarOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor,
	UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult)
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (OtherActor != PlayerPawn)
	{
		return;
	}

	if (bExplotarASiMismo)
	{
		SpawnearExplosionEnTransform(GetActorTransform());

		ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

		if (PlayerCharacter)
		{
			PlayerCharacter->LaunchCharacter(FVector(0.0f, 0.0f, LaunchVelocityZ),
				false,true);
		}

		Destroy();
		return;
	}

	if (bExplotarTodo)
	{
		TArray<AActor*> TargetPoints;

		UGameplayStatics::GetAllActorsOfClass(
			GetWorld(),
			ATargetPoint::StaticClass(),TargetPoints);

		for (AActor* Actor : TargetPoints)
		{
			if (Actor)
			{
				SpawnearExplosionEnLocation(Actor->GetActorLocation());
			}
		}

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.0f,FColor::Red,
				TEXT("¡Todo explotó!"));
		}

		return;
	}

	if (UbicacionExplosion)
	{
		SpawnearExplosionEnLocation(UbicacionExplosion->GetActorLocation());
	}
}

void AE06_Detonador_TP6_AC::SpawnearExplosionEnTransform(const FTransform& Transform)
{
	if (!ClaseExplosion)
	{
		return;
	}

	GetWorld()->SpawnActor<AE06_Explocion_TP2_AC>(ClaseExplosion,Transform);
}

void AE06_Detonador_TP6_AC::SpawnearExplosionEnLocation(const FVector& Location)
{
	if (!ClaseExplosion)
	{
		return;
	}

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(Location);

	GetWorld()->SpawnActor<AE06_Explocion_TP2_AC>(ClaseExplosion,SpawnTransform);
}