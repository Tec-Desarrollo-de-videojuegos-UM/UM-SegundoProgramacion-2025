// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E05_TP2_AC/E05_TP2_AC.h"

// Sets default values
AE05_TP2_AC::AE05_TP2_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Raiz;

	MeshComponent =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("componenteMesh"));
	MeshComponent->SetupAttachment(Raiz);

}

void AE05_TP2_AC::OnConstruction(const FTransform&Transform)
{
	Super::OnConstruction(Transform);

	if (MeshComponent)
	{
		if (NewMesh)
		{
			MeshComponent->SetStaticMesh(NewMesh);
		}

		if (Material)
		{
			MeshComponent->SetMaterial(0,Material);
		}
	}
}

