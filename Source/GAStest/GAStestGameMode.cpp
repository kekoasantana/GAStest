// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAStestGameMode.h"
#include "GAStestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAStestGameMode::AGAStestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
