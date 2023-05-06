// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grappling_hookGameMode.h"
#include "Grappling_hookCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrappling_hookGameMode::AGrappling_hookGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
