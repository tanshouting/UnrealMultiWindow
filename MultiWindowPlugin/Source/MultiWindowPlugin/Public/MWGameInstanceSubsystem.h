// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MWGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MULTIWINDOWPLUGIN_API UMWGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const ;
	virtual void Initialize(FSubsystemCollectionBase& Collection);
	virtual void Deinitialize();
public:
	
	UFUNCTION(BlueprintCallable)
		void SubCreateWindowByIndex(int32 index);
};
