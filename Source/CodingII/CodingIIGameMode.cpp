// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodingIIGameMode.h"
#include "CodingIICharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodingIIGameMode::ACodingIIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> 
	PlayerPawnBPClass(TEXT("/ Game / Scripts / Blueprints / BP_ThirdPersonCharacter.BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
