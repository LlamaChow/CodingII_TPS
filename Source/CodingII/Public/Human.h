// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Human.generated.h"

UCLASS()
class CODINGII_API AHuman : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHuman();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Actor Properties


	UPROPERTY(EditAnywhere)
		FString PlayerName = "Alex";

	UPROPERTY(EditAnywhere)
		int Speed = 10;

	UPROPERTY(EditAnywhere)
		int32 ElementalType = 0;

	UPROPERTY(EditAnywhere)
		FString Elements[4];

	UPROPERTY(EditAnywhere)
		float Health = 10;

	UPROPERTY(EditAnywhere)
		float Damage = 4;


	//Actor Functions


	UFUNCTION(BlueprintCallable)
		void RandomizeHuman();

	UFUNCTION(BlueprintCallable)
		void TakeDamage(AHuman* attacker);

	UFUNCTION(BlueprintCallable)
		float DamageMultiplier(int32 GivenElemType);

};
