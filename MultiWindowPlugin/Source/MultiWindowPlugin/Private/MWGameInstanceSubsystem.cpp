// Fill out your copyright notice in the Description page of Project Settings.


#include "MWGameInstanceSubsystem.h"
#include "IMultiWindowPluginModule.h"

bool UMWGameInstanceSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	Super::ShouldCreateSubsystem(Outer);
	return true;
}

void UMWGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp,Warning,TEXT("Begin"))
}

void UMWGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UMWGameInstanceSubsystem::SubCreateWindowByIndex(int32 index)
{
	IMultiWindowPluginModule::Get().CreateWindowByIndex(index);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "tanshouting");
}
