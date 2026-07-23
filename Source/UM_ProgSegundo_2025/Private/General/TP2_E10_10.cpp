// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E10_10.h"

ATP2_E10_10::ATP2_E10_10()
{
	PrimaryActorTick.bCanEverTick =false;

	Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Raiz;

	MeshComponent =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(Raiz);
}

void ATP2_E10_10::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (!MeshComponent)
	{
		return;
	}

	UStaticMesh*MeshSeleccionado =nullptr;

	switch (TipoDeObjeto)
	{
	case ETP2_ENUM::Cubo:
		MeshSeleccionado =MeshCubo;
		break;

	case ETP2_ENUM::Esfera:
		MeshSeleccionado =MeshEsfera;
		break;

	case ETP2_ENUM::Cilindro:
		MeshSeleccionado =MeshCilindro;
		break;

	default:
		break;
	}

	if (MeshSeleccionado)
	{
		MeshComponent->SetStaticMesh(MeshSeleccionado);
	}
}


