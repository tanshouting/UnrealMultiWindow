// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"

class FToolBarBuilder;
class FMenuBuilder;
class FMWSlate;
class IMultiWindowPluginModule : public IModuleInterface
{
public:
	static inline IMultiWindowPluginModule& Get() { return FModuleManager::LoadModuleChecked<IMultiWindowPluginModule>("MultiWindowPlugin"); }
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	TWeakObjectPtr<UTextureRenderTarget2D> GetTextureRenderTarget2DByIndex(int32 Index);
	bool SetTextRenderTarget2D(UTextureRenderTarget2D* TexRenderTarget2D,int32 TRTIndex);
	void CreateRenderingWindow();
	void CreateWindowByIndex(int32 Index);
	int32 GetWasRenderWindowcount();
	TArray<FMWSlate*> WindwsArray ;
private:

	void RegisterMenus();


private:
	TSharedPtr<class FUICommandList> PluginCommands;
	int32  RenderingWindowCount = 0;
public:
	TWeakObjectPtr<UTextureRenderTarget2D> W1TRT;
	TWeakObjectPtr<UTextureRenderTarget2D> W2TRT;
	TWeakObjectPtr<UTextureRenderTarget2D> W3TRT;
	TMap<int32,TWeakObjectPtr<UTextureRenderTarget2D>> TRTMap;
};
