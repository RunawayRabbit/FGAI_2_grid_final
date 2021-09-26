// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "FGAI_2/Grid/FGGridActor.h"
#include "FGAI_2/Util/FVector2Int.h"

class AFGGridActor;

class FGAI_2_API FGPath
{
public:
	explicit FGPath(AFGGridActor* Domain);
private:
	FGPath() = delete;

	/** Stored in reverse order such that Path[0] is the goal, Path[n] is the start point.*/
	TArray<uint32> Path;

	int CurrentStep = -1;

	FVector CurrentGoal;

	AFGGridActor* Domain = nullptr;

	bool bReady = false;
public:

	void Clear() { Path.Empty(); }

	/** Returns true if the goal has been reached */
	bool AdvanceToNextStep();

	FVector GetCurrentGoal();

	void AddToPath(const FVector2Int Coords);

	void AddToPath(const int32 TileIndex);

	void Finalize();

	bool IsReady() const;
};
