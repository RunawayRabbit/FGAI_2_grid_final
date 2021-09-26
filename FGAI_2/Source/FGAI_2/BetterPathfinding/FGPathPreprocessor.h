#pragma once
#include "FGAI_2/Grid/FGGridActor.h"

struct FSignpost
{
	int8 Up = 0;
	int8 UpLeft = 0;
	int8 Left = 0;
	int8 DownLeft = 0;
	int8 Down = 0;
	int8 DownRight = 0;
	int8 Right = 0;
	int8 Upright = 0;

};

class FGPathPreprocessor
{
public:
	FGPathPreprocessor(AFGGridActor* Grid);
	FGPathPreprocessor() = delete;

	void ProcessMap();

	void FindJumpPoints();
	void DebugDrawJumpPoints();
	bool IsBlocked(const int32 TileIndex) const;
	bool IsValidAndWalkable(FVector2Int TileIndex) const;
	bool IsJumpPoint(const int32 RootX, const int32 RootY, const int32 DirX, const int32 DirY) const;

	void CalculateSignposts();

	void CalculateGoalBounding();
	bool IsReady() const;


private:
	const AFGGridActor* Grid;

	enum EBitfieldDirections : uint8
	{
		Downward  = 1 << 0,
        Rightward = 1 << 1,
        Upward    = 1 << 2,
        Leftward  = 1 << 3,
    };
	TArray<uint8> JumpPointMap; //EBitfieldDirections

	bool bIsReady = false;
public:
	TArray<FSignpost> SignpostMap;
};


