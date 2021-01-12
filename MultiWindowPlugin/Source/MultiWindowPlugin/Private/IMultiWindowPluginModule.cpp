// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMultiWindowPluginModule.h"
#include "MultiWindowPluginStyle.h"
#include "MultiWindowPluginCommands.h"
#include "Misc/MessageDialog.h"
#include "MyGameViewportClient.h"
#include "ToolMenus.h"

static const FName MultiWindowPluginTabName("MultiWindowPlugin");

#define LOCTEXT_NAMESPACE "FMultiWindowPluginModule"

void IMultiWindowPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FMultiWindowPluginStyle::Initialize();
	FMultiWindowPluginStyle::ReloadTextures();

	FMultiWindowPluginCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMultiWindowPluginCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &IMultiWindowPluginModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &IMultiWindowPluginModule::RegisterMenus));
}

void IMultiWindowPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FMultiWindowPluginStyle::Shutdown();

	FMultiWindowPluginCommands::Unregister();
	//for (auto key : WindwsArray)
	//{
	//	key = nullptr;
	//}
}

void IMultiWindowPluginModule::PluginButtonClicked()
{
	FMWSlate* temp = new FMWSlate();
	WindwsArray.Add(temp);
	temp->Initialize();
}

TWeakObjectPtr<UTextureRenderTarget2D> IMultiWindowPluginModule::GetTextureRenderTarget2DByIndex(int32 Index)
{
	if (!TRTMap.Contains(Index))
	{
		return nullptr;
	}
	return TRTMap[Index];
}

bool IMultiWindowPluginModule::SetTextRenderTarget2D(UTextureRenderTarget2D* TexRenderTarget2D,int32 TRTIndex)
{
	if (TRTIndex != 0)
	{
		if (TRTMap.Contains(TRTIndex))
		{
			TRTMap[TRTIndex] = TexRenderTarget2D;
		}
		TRTMap.Add(TRTIndex, TexRenderTarget2D);
		return true;
	}
	return false;
}

void IMultiWindowPluginModule::CreateRenderingWindow()
{
	RenderingWindowCount++;
	//FMWSlate.Initialize();

}

void IMultiWindowPluginModule::CreateWindowByIndex(int32 Index)
{
	RenderingWindowCount = Index;
}

int32 IMultiWindowPluginModule::GetWasRenderWindowcount()
{
	return RenderingWindowCount;
}

void IMultiWindowPluginModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FMultiWindowPluginCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FMultiWindowPluginCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(IMultiWindowPluginModule, MultiWindowPlugin)