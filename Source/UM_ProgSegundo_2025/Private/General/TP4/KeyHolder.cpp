// Fill out your copyright notice in the Description page of Project Settings.


#include "General/TP4/KeyHolder.h"

// Sets default values for this component's properties
UKeyHolder::UKeyHolder()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UKeyHolder::SetKey(bool hasKey)
{
	if (bHasKey)
	{
		return;
	}
	
	bHasKey = hasKey;
	
}
bool UKeyHolder::GetHasKey()
{
	return bHasKey;
}
