// Fill out your copyright notice in the Description page of Project Settings.


#include "AC/TP2/E06_TP2_AC/E06_Explocion_TP2_AC.h"

#include "NiagaraComponent.h"

// Sets default values
AE06_Explocion_TP2_AC::AE06_Explocion_TP2_AC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Raiz =CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent =Raiz;

	EfectoExplosion =CreateDefaultSubobject<UNiagaraComponent>(TEXT("EfectoExplosion"));
	EfectoExplosion->SetupAttachment(Raiz);

	SonidoExplosion =CreateDefaultSubobject<UAudioComponent>(TEXT("SonidoExplosion"));
	SonidoExplosion->SetupAttachment(Raiz);

	InitialLifeSpan =5.0f;
}




