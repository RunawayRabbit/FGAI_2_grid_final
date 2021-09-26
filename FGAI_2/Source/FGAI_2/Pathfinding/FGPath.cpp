// Fill out your copyright notice in the Description page of Project Settings.


#include "FGPath.h"

FGPath::FGPath(AFGGridActor* Domain) : Domain(Domain)
{}

bool FGPath::AdvanceToNextStep()
{
	if(Path.Num() == 0) return true;

	Path.RemoveAt(Path.Num()-1);
	return Path.Num() == 0;
}

FVector FGPath::GetCurrentGoal()
{
	if(Path.Num() != 0 && CurrentStep != Path.Num()-1)
	{
		// Current step should change.
		const int32 TileIndex = Path.Last();
		CurrentGoal = Domain->GetWorldLocationFromIndex(TileIndex);
		CurrentStep = Path.Num()-1;
	}

	return CurrentGoal;
}

void FGPath::AddToPath(const FVector2Int Coords)
{
	const int32 TileIndex = Domain->GetTileIndexFromCoords(Coords);
	AddToPath(TileIndex);
}

void FGPath::AddToPath(const int32 TileIndex)
{
	Path.Add(TileIndex);
}

void FGPath::Finalize()
{
	bReady = true;
}

bool FGPath::IsReady() const
{
	return bReady;
}
