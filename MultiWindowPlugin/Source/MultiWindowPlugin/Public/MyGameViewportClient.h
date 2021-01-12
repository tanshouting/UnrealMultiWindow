// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "SCompoundWidget.h"
#include "UnrealClient.h"
#include "SCompoundWidget.h"
#include "Runtime/Slate/Public/Widgets/Input/SComboBox.h"

/**
 * 
 */
class FMultiWindowViewportClient : public FViewportClient
{
public:
	virtual void Draw(FViewport* Viewport, FCanvas* Canvas)override;
private:
	 int32 TextureIndex=-1;
};


class SViewport;
class SceneViewport;
class SMWiewport :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMWiewport) {}
	SLATE_END_ARGS()
public:
	void Construct(const FArguments& InArgs);
private:
	TSharedPtr<SViewport> Viewport;
	TSharedPtr<FSceneViewport> SceneViewport;
	TSharedPtr<FMultiWindowViewportClient> MWViewportClient;
public:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)override;
};
class FMWSlate
{
public :
	FMWSlate();
	~FMWSlate();
	void OnClosed(const TSharedRef<SWindow>& Window);

public:
	 void Initialize();
	 void Shutdown();
	TSharedPtr<FMWSlate> MWSlate;
private:
	float MWWindowX;
	float MWWindowY;
	TSharedPtr<SWindow> MWWindow;
	FOnWindowClosed InDelegate;
	TSharedPtr<SMWiewport >MWViewport;

};