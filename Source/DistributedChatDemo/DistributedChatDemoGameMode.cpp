// Copyright Epic Games, Inc. All Rights Reserved.

#include "DistributedChatDemoGameMode.h"
#include "DistributedChatDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADistributedChatDemoGameMode::ADistributedChatDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
