// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/TP2_E10/TP2_E10_Enum_AC.h"


ATP2_E10_Enum_AC::ATP2_E10_Enum_AC()
{
	PrimaryActorTick.bCanEverTick =false;

	Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Raiz;

	MeshComponent =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(Raiz);
}

void ATP2_E10_Enum_AC::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (!MeshComponent)
	{
		return;
	}

	UStaticMesh*MeshSeleccionado =nullptr;

	switch (TipoDeObjeto)
	{
	case ETP2_TipoObjeto::Cubo:
		MeshSeleccionado =MeshCubo;
		break;

	case ETP2_TipoObjeto::Esfera:
		MeshSeleccionado =MeshEsfera;
		break;

	case ETP2_TipoObjeto::Cilindro:
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
