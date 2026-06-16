// Fill out your copyright notice in the Description page of Project Settings.


#include "FBL/TP2/E05_TP2_FBL.h"

// Sets default values
AE05_TP2_FBL::AE05_TP2_FBL()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AE05_TP2_FBL::BeginPlay()
{
	Super::BeginPlay();
	
}

void AE05_TP2_FBL::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
}



