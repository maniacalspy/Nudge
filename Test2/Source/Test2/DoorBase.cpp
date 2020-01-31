// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBase.h"
#include "ConstructorHelpers.h"
// Sets default values
ADoorBase::ADoorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UMaterial> PanelOnMaterialAsset(TEXT("Material'/Game/FirstPerson/Textures/Door/DoorMaterial.DoorMaterial'"));
	if (PanelOnMaterialAsset.Succeeded()) {
		pPanelOnMaterial = PanelOnMaterialAsset.Object;
	}

}

// Called when the game starts or when spawned
void ADoorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

