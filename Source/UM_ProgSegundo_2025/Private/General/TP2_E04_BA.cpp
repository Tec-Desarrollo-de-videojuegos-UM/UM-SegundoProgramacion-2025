// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E04_BA.h"

// Sets default values
ATP2_E04_BA::ATP2_E04_BA()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Raiz = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Raiz"));
	RootComponent = Raiz;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

}

void ATP2_E04_BA::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if(MeshComponent)
	{
		if (NewMesh)
		{
			MeshComponent->SetStaticMesh(NewMesh);
		}
		if(Material)
		{
			MeshComponent->SetMaterial(0, Material);
		}
	}
}

// Called when the game starts or when spawned
void ATP2_E04_BA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATP2_E04_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

