// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Chaptr1_to_6GameMode.h"
#include "Chaptr1_to_6Character.h"
#include "UObject/ConstructorHelpers.h"

AChaptr1_to_6GameMode::AChaptr1_to_6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
