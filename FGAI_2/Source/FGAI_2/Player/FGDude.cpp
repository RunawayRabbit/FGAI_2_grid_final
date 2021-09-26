// Fill out your copyright notice in the Description page of Project Settings.


#include "FGDude.h"

#include <Actor.h>


#include "FGPlayerController.h"
#include "FGAI_2/Pathfinding/FGSimpleAStar.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFGDude::AFGDude()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFGDude::BeginPlay()
{
	Super::BeginPlay();
}


void AFGDude::DoMovement(const float DeltaSeconds)
{
	const FVector CurrentGoal = Path->GetCurrentGoal();
	const FVector CurrentLocation = GetActorLocation();

	const FVector DeltaMovement = CurrentGoal - CurrentLocation;
	const FVector DeltaPositionCurFrame = DeltaMovement.GetSafeNormal() * MoveSpeed * DeltaSeconds;

	if(FVector::DistSquared(CurrentLocation, CurrentGoal) < DeltaPositionCurFrame.SizeSquared())
	{
		SetActorLocation(CurrentGoal);
		if(Path->AdvanceToNextStep())
			Path = nullptr;
	}
	else
	{
		SetActorLocationAndRotation(CurrentLocation + DeltaPositionCurFrame, DeltaMovement.Rotation());
	}
}

void AFGDude::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(Path && Path->IsReady()) DoMovement(DeltaSeconds);
}

void AFGDude::NotifyActorOnClicked(FKey ButtonPressed)
{
	if(bIsSelected)
		Deselect();
	else
		Select();
}

void AFGDude::MoveTo(const FVector TargetLocation)
{
	const auto GridActor = Cast<AFGGridActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AFGGridActor::StaticClass()));
	FGSimpleAStar AStar(GridActor);

	Path = AStar.FindPath(GetActorLocation(),TargetLocation);
}

void AFGDude::Select()
{
	auto PlayerController = Cast<AFGPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if(!PlayerController)
	{
		UE_LOG(LogActor, Warning, TEXT("AFGDude %s could not cast the PlayerController to AFGPlayerController!"), *this->GetName());
	}

	PlayerController->AddUnitToSelection(this);
	bIsSelected = true;
}

void AFGDude::Deselect()
{
	auto PlayerController = Cast<AFGPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if(!PlayerController)
	{
		UE_LOG(LogActor, Warning, TEXT("AFGDude %s could not cast the PlayerController to AFGPlayerController!"), *this->GetName());
	}

	PlayerController->RemoveUnitFromSelection(this);
	bIsSelected = false;
}

void AFGDude::DebugPrintStatus() const
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White,
	FString::Printf(TEXT("%s is now %hsselected"), *GetName(), bIsSelected ? "" : "not "));
}
