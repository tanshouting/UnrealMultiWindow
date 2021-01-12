// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "MWSceneCaptureComponent2D.generated.h"

/**
 * 
 */
UCLASS(hidecategories = (Collision, Object, Physics, SceneComponent), ClassGroup = Rendering, editinlinenew, meta = (BlueprintSpawnableComponent))
class MULTIWINDOWPLUGIN_API UMWSceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()
public:
	virtual void Activate(bool bReset)override;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category= "MultiWindow")
		int32 TRTIndex;
};
