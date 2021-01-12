// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiWindowPluginCommands.h"

#define LOCTEXT_NAMESPACE "FMultiWindowPluginModule"

void FMultiWindowPluginCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "MultiWindowPlugin", "Execute MultiWindowPlugin action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
