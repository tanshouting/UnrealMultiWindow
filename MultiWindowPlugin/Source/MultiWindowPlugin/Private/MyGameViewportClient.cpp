// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameViewportClient.h"
#include "SlateApplication.h"

#include "Engine.h"

#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include  "Engine.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "SViewport.h"
#include "SToolTip.h"
#include "SWindow.h"
#include "IMultiWindowPluginModule.h"

void FMultiWindowViewportClient::Draw(FViewport * Viewport, FCanvas * Canvas)
{
	Canvas->Clear(FLinearColor::Black);//清除全部已经绘制的Canvas
	//TextureIndex = IMultiWindowPluginModule::Get().GetWasRenderWindowcount();
	if (TextureIndex < 0)
	{
		TextureIndex = IMultiWindowPluginModule::Get().GetWasRenderWindowcount();
	}
	auto TextRenderTarget2D = IMultiWindowPluginModule::Get().GetTextureRenderTarget2DByIndex(TextureIndex);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::FromInt(TextureIndex));
	if (TextRenderTarget2D.IsValid() && TextRenderTarget2D->Resource != nullptr)
	{
		FCanvasTileItem titleItem(FVector2D(0,0), TextRenderTarget2D->Resource,
			FVector2D(Viewport->GetRenderTargetTexture()->GetSizeX(), Viewport->GetRenderTargetTexture()->GetSizeY()),
			FLinearColor::White);
		titleItem.BlendMode = ESimpleElementBlendMode::SE_BLEND_Opaque;
		Canvas->DrawItem(titleItem);
	}		
}

//viewport sceneviewport window 
void SMWiewport::Construct(const FArguments& InArgs)
{
	Viewport = SNew(SViewport).IsEnabled(true)
		.EnableGammaCorrection(true).
		ShowEffectWhenDisabled(false).
		EnableBlending(true).
		ToolTip(SNew(SToolTip).
			Text(FText::FromString("FistViewPort")));
	MWViewportClient = MakeShareable(new FMultiWindowViewportClient);
	SceneViewport = MakeShareable(new FSceneViewport(MWViewportClient.Get(),Viewport));
	Viewport->SetViewportInterface(SceneViewport.ToSharedRef());
	this->ChildSlot
		[
			Viewport.ToSharedRef()
		];

}


void SMWiewport::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SceneViewport->Draw();
}

FMWSlate::FMWSlate():MWWindowX(1280),MWWindowY(720)
{
	MWWindow = SNew(SWindow).Title(FText::FromString("123")).ScreenPosition(FVector2D(0, 0)).ScreenPosition(FVector2D(0, 0))
		.ClientSize(FVector2D(MWWindowX, MWWindowY))
		.AutoCenter(EAutoCenter::PreferredWorkArea)
		.UseOSWindowBorder(true)
		.SaneWindowPlacement(false)
		.SizingRule(ESizingRule::UserSized);
	FSlateApplication::Get().AddWindow(MWWindow.ToSharedRef());
	InDelegate.BindRaw(this, &FMWSlate::OnClosed);//bind
	MWWindow->SetOnWindowClosed(InDelegate);//executed
	MWViewport = SNew( SMWiewport);
	MWWindow->SetContent(MWViewport.ToSharedRef());
}

FMWSlate::~FMWSlate()
{
	//InDelegate.Unbind();
}

void FMWSlate::OnClosed(const TSharedRef<SWindow>& Window)
{
	Shutdown();
	InDelegate.Unbind();
}

void FMWSlate::Initialize()
{
	//if (!MWSlate.IsValid())
	//{
	//MWSlate = MakeShareable(new FMWSlate());
	//}
}

void FMWSlate::Shutdown()
{
	if (MWSlate.IsValid())
	{
		MWSlate.Reset();
		//IMultiWindowPluginModule::Get().RenderingWindowCount = IMultiWindowPluginModule::Get().RenderingWindowCount - 1;
		MWSlate = nullptr;
	}
}
