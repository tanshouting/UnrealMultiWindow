// Fill out your copyright notice in the Description page of Project Settings.


#include "WindowControllerActor.h"
#include "IMultiWindowPluginModule.h"

// Sets default values
AWindowControllerActor::AWindowControllerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWindowControllerActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWindowControllerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWindowControllerActor::CreateWindowByIndex(int32 Index)
{
	IMultiWindowPluginModule::Get().CreateWindowByIndex(Index);
	IMultiWindowPluginModule::Get().PluginButtonClicked();
}

//void AWindowControllerActor::returnFalse(int32 Index)
//{
//	
//}

