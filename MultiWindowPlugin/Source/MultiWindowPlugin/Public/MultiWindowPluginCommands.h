// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MultiWindowPluginStyle.h"

class FMultiWindowPluginCommands : public TCommands<FMultiWindowPluginCommands>
{
public:

	FMultiWindowPluginCommands()
		: TCommands<FMultiWindowPluginCommands>(TEXT("MultiWindowPlugin"), NSLOCTEXT("Contexts", "MultiWindowPlugin", "MultiWindowPlugin Plugin"), NAME_None, FMultiWindowPluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
