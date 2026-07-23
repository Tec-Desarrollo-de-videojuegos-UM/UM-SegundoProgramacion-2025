// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E05B_BA.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


ATP2_E05B_BA::ATP2_E05B_BA()
{
PrimaryActorTick.bCanEverTick =false;

Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
RootComponent =Raiz;

BotonMesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BotonMesh"));
BotonMesh->SetupAttachment(Raiz);
BotonMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));

CajaColision =CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
CajaColision->SetupAttachment(BotonMesh);
CajaColision->SetBoxExtent(FVector(50.0f,50.0f,20.0f));
CajaColision->SetRelativeLocation(FVector(0.0f,0.0f,30.0f));
}

void ATP2_E05B_BA::BeginPlay()
{
    Super::BeginPlay();

    CajaColision->OnComponentBeginOverlap.AddDynamic(
    this,
    &ATP2_E05B_BA::AlComenzarOverLap
    );
}

void ATP2_E05B_BA::OnConstruction(const FTransform&Transform)
{
    Super::OnConstruction(Transform);

// Acá se podría cambiar el material según las variables booleanas.
// Por ejemplo: material rojo si explota todo, amarillo si explota a sí mismo, etc.
}

void ATP2_E05B_BA::AlComenzarOverLap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent*OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult
    )
{
    APawn*PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);

    if (OtherActor!=PlayerPawn)
        {
    return;
        }

    if (bExplotarAsiMismo)
        {
    SpawnearExplosionEnTransform(GetActorTransform());

ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);

if (PlayerCharacter)
        {
    PlayerCharacter->LaunchCharacter(
        FVector(0,0,LaunchVelocityZ),
        false,
        true);
        }

Destroy();
return;
    }

if (bExplotarTodo)
    {
TArray<AActor*>TargetPoints;
        UGameplayStatics::GetAllActorsOfClass(
GetWorld(),
            ATargetPoint::StaticClass(),
TargetPoints
        );

for (AActor*Actor :TargetPoints)
        {
if (Actor)
            {
SpawnearExplosionEnLocation(Actor->GetActorLocation());
            }
        }

if (GEngine)
        {
GEngine->AddOnScreenDebugMessage(
-1,
5.0f,
                FColor::Red,
TEXT("¡Todo explotó!")
            );
        }

return;
    }

if (UbicacionExplosion)
    {
SpawnearExplosionEnLocation(UbicacionExplosion->GetActorLocation());
    }
}

void ATP2_E05B_BA::SpawnearExplosionEnTransform(const FTransform&Transform)
{
if (!ClaseExplosion)
    {
return;
    }

GetWorld()->SpawnActor<ATP2_E05B_BA>(
ClaseExplosion,
Transform
    );
}

void ATP2_E05B_BA::SpawnearExplosionEnLocation(const FVector&Location)
{
if (!ClaseExplosion)
    {
return;
    }

FTransform SpawnTransform;
SpawnTransform.SetLocation(Location);

GetWorld()->SpawnActor<ATP2_E05B_BA>(
ClaseExplosion,
SpawnTransform
    );
}

