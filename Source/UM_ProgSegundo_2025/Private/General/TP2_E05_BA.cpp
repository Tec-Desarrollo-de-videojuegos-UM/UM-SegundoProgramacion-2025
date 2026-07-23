// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP2_E05_BA.h"

#include "Components/AudioComponent.h"

// Sets default values
ATP2_E05_BA::ATP2_E05_BA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Raiz = CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent = Raiz;
	
	EfectoExplosion = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EfectoExplosion"));
	EfectoExplosion->SetupAttachment(Raiz);
	
	SonidoExplosion = CreateDefaultSubobject<UAudioComponent>(TEXT("Sonido"));
	SonidoExplosion->SetupAttachment(Raiz);
	
	InitialLifeSpan = 5.0f;
}

