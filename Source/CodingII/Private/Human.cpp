// Fill out your copyright notice in the Description page of Project Settings.


#include "Human.h"

// Sets default values
AHuman::AHuman()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHuman::BeginPlay()
{

	Super::BeginPlay();

	RandomizeHuman();

}

// Called every frame
void AHuman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AHuman::RandomizeHuman()
{

	UE_LOG(LogTemp, Display, TEXT("Randomizing Name"));

	int RandElement = FMath::RandRange(0, 3);

	UE_LOG(LogTemp, Display, TEXT("Random: %d"), RandElement);

	UE_LOG(LogTemp, Display, TEXT("Player is a(n) %s elemental."), *Elements[RandElement]);

	Speed = FMath::RandRange(5.0, 25.0);

	ElementalType = RandElement;

}


void AHuman::TakeDamage(AHuman* attacker)
{

	UE_LOG(LogTemp, Display, TEXT("My attacker's name is: %s"), *attacker->PlayerName);

	float DmgMultiplier = DamageMultiplier(attacker->ElementalType);

	Health -= attacker->Damage * DmgMultiplier;

	UE_LOG(LogTemp, Display, TEXT("I now have %f health."), Health);

}


float AHuman::DamageMultiplier(int32 GivenElemType)
{

	float Multiplier = 1;

	if (GivenElemType == ElementalType) 
	{

		Multiplier = 0.5;

	}
	else if (GivenElemType == 0 && ElementalType == 1)
	{

		Multiplier = 2;

	}
	else if (GivenElemType == 0 && ElementalType == 1)
	{

		Multiplier = 2;

	}
	else
	{

		Multiplier = 1;

	}

	return Multiplier;

}
