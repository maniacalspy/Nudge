// Fill out your copyright notice in the Description page of Project Settings.

#include "EndLevelDoor.h"
#include "Engine/Engine.h"

// Sets default values
AEndLevelDoor::AEndLevelDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorFrameSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Frame_Skeleton"));
	DoorPanelSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door_Panel_Skeleton"));

}

// Called when the game starts or when spawned
void AEndLevelDoor::BeginPlay()
{
	Super::BeginPlay();
	
	


}

// Called every frame
void AEndLevelDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEndLevelDoor::OpenDoor()
{
	DoorPanelSkeleton->Play(false);
}
