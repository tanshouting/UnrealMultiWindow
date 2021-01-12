// Fill out your copyright notice in the Description page of Project Settings.


#include "MWSceneCaptureComponent2D.h"
#include "IMultiWindowPluginModule.h"

void UMWSceneCaptureComponent2D::Activate(bool bReset)
{
	Super::Activate();
	IMultiWindowPluginModule::Get().SetTextRenderTarget2D(this->TextureTarget,this->TRTIndex);
}
