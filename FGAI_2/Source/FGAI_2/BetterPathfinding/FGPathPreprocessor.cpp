#include "FGPathPreprocessor.h"

FGPathPreprocessor::FGPathPreprocessor(AFGGridActor* Grid)
	: Grid(Grid)
{
};

void FGPathPreprocessor::ProcessMap()
{
	bIsReady = false;
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Magenta, TEXT("Preprocessing Map.."));
	FindJumpPoints();

	DebugDrawJumpPoints();

	CalculateSignposts();

	//CalculateGoalBounding();

	bIsReady = true;
}

void FGPathPreprocessor::FindJumpPoints()
{
	JumpPointMap.SetNumZeroed(Grid->GetNumTiles());

	for (int Y = 0; Y < Grid->Height; ++Y)
	{
		for (int X = 0; X < Grid->Width; ++X)
		{
			const int32 TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (!Grid->TileList[TileIndex].bBlock)
			{
				if (IsJumpPoint(X, Y, 0, 1))
					JumpPointMap[TileIndex] |= Upward;
				if (IsJumpPoint(X, Y, 1, 0))
					JumpPointMap[TileIndex] |= Rightward;
				if (IsJumpPoint(X, Y, 0, -1))
					JumpPointMap[TileIndex] |= Downward;
				if (IsJumpPoint(X, Y, -1, 0))
					JumpPointMap[TileIndex] |= Leftward;
			}
		}
	}
}

void FGPathPreprocessor::DebugDrawJumpPoints()
{
	for (int i = 0; i < JumpPointMap.Num(); ++i)
	{
		const uint8 Tile = JumpPointMap[i];
		if (Tile)
		{
			const auto Coords = Grid->GetCoordsFromIndex(i);
			Grid->DrawDebugBoxAt(Coords, FColor::Cyan, 20.0f);
		}
	}
}

bool FGPathPreprocessor::IsBlocked(const int32 TileIndex) const
{
	// @TODO: Move this into FGGridActor
	return !Grid->IsTileIndexValid(TileIndex) || Grid->TileList[TileIndex].bBlock;
}

bool FGPathPreprocessor::IsValidAndWalkable(const FVector2Int Coords) const
{
	// @TODO: Move this into FGGridActor
	const auto TileIndex = Grid->GetTileIndexFromCoords(Coords);

	return Grid->IsTileValid(Coords) && Grid->TileList[TileIndex].bBlock;
}

bool FGPathPreprocessor::IsJumpPoint(const int32 RootX, const int32 RootY,
                                     const int32 DirX, const int32 DirY) const
{
	/*
	*	Example: DirX = 1, DirY = 0.
	*  |---|---|---|
	*  | BL| L |   |   +   Positive Dir
	*  |---|---|---|   -  Tile Behind
	*  | - | * | + |   L  Tile Left
	*  |---|---|---|   R  Tile Right
	*  | BR| R |   |   BL Tile Behind Left
	*  |---|---|---|   BR Tile Behind Right
	*/

	const auto TileBehind =
		Grid->GetTileIndexFromXY(RootX - DirX, RootY - DirY);

	const auto TileLeft =
		Grid->GetTileIndexFromXY(RootX + DirY, RootY + DirX);

	const auto TileRight =
		Grid->GetTileIndexFromXY(RootX - DirY, RootY - DirX);

	const auto TileBehindLeft =
		Grid->GetTileIndexFromXY(RootX - DirX + DirY, RootY - DirY + DirX);

	const auto TileBehindRight =
		Grid->GetTileIndexFromXY(RootX - DirX - DirY, RootY - DirY - DirX);

	if (IsBlocked(TileBehind))
	{
		// There's a wall behind us, so we can't possibly be a jump point in this direction.
		return false;
	}

	if (!IsBlocked(TileLeft) &&
		IsBlocked(TileBehindLeft))
	{
		// Left is open, but Behind Left is a wall, meaning this is a corner so we've found a jump point!
		return true;
	}

	if (!IsBlocked(TileRight) &&
		IsBlocked(TileBehindRight))
	{
		// Right is open, but Behind Right is a wall, meaning this is a corner so we've found a jump point!
		return true;
	}

	return false;
}

void FGPathPreprocessor::CalculateSignposts()
{
	SignpostMap.SetNumZeroed(Grid->GetNumTiles());

#pragma region HorizontalSignpostScan
	for (int Y = 0; Y < Grid->Height; ++Y)
	{
		// @NOTE: Scanning to the right, creating signposts that point behind us.
		int8 Accumulator = -1;
		bool PointingAtJumpPoint = false;
		for (int X = 0;
		     X < Grid->Width;
		     ++X)
		{
			const auto TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (IsBlocked(TileIndex))
			{
				// We found a wall, reset our counters!
				Accumulator = -1;
				PointingAtJumpPoint = false;
			}
			else
			{
				// Not a wall! Increment our counters and write our signposts!
				++Accumulator;

				// @NOTE: Negative means the signpost is pointing at a wall.
				SignpostMap[TileIndex].Left = PointingAtJumpPoint ? Accumulator : -Accumulator;
			}
		}

		// @NOTE: Scanning to the left, creating signposts that point behind us.
		Accumulator = -1;
		PointingAtJumpPoint = false;
		for (int X = Grid->Width - 1;
		     X >= 0;
		     --X)
		{
			const auto TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (IsBlocked(TileIndex))
			{
				// We found a wall, reset our counters!
				Accumulator = -1;
				PointingAtJumpPoint = false;
			}
			else
			{
				// Not a wall! Increment our counters and write our signposts!
				++Accumulator;

				// @NOTE: Negative means the signpost is pointing at a wall.
				SignpostMap[TileIndex].Right = PointingAtJumpPoint ? Accumulator : -Accumulator;
			}
		}
	}
#pragma endregion HorizontalSignpostScan
#pragma region VerticalSignpostScan

	for (int X = 0; X < Grid->Width; ++X)
	{
		// @NOTE: Scanning upwards, creating signposts that point behind us.
		int8 Accumulator = -1;
		bool PointingAtJumpPoint = false;
		for (int Y = 0;
		     Y < Grid->Height;
		     ++Y)
		{
			const auto TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (IsBlocked(TileIndex))
			{
				// We found a wall, reset our counters!
				Accumulator = -1;
				PointingAtJumpPoint = false;
				SignpostMap[TileIndex].Down = 0; // Unnecessary?
			}
			else
			{
				// Not a wall! Increment our counters and write our signposts!
				++Accumulator;

				// @NOTE: Negative means the signpost is pointing at a wall.
				SignpostMap[TileIndex].Down = PointingAtJumpPoint ? Accumulator : -Accumulator;
			}
		}

		// @NOTE: Scanning downwards, creating signposts that point behind us.
		Accumulator = -1;
		PointingAtJumpPoint = false;
		for (int Y = Grid->Height - 1;
		     Y >= 0;
		     --Y)
		{
			const auto TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (IsBlocked(TileIndex))
			{
				// We found a wall, reset our counters!
				Accumulator = -1;
				PointingAtJumpPoint = false;
				SignpostMap[TileIndex].Up = 0; // Unnecessary?
			}
			else
			{
				// Not a wall! Increment our counters and write our signposts!
				++Accumulator;

				// @NOTE: Negative means the signpost is pointing at a wall.
				SignpostMap[TileIndex].Up = PointingAtJumpPoint ? Accumulator : -Accumulator;
			}
		}
	}
#pragma endregion VerticalSignpostScan

#pragma region UpwardDiagonalsSignpostScan
	for (auto Y = 0; Y <= Grid->Height; ++Y)
	{

		for (auto X = 0; X <= Grid->Width; ++X)
		{
			const auto TileIndex = Grid->GetTileIndexFromXY(X, Y);
			if (!IsBlocked(TileIndex))
			{
				// This is a non-wall, let's make some signposts~
				const FVector2Int LeftNeighbour{X - 1, Y};
				const FVector2Int DownNeighbour{X, Y - 1};
				const FVector2Int DownLeftNeighbour{X - 1, Y - 1};
				const int32 DownLeftTileIndex = Grid->GetTileIndexFromCoords(DownLeftNeighbour);

				if (!IsValidAndWalkable(LeftNeighbour) ||
					!IsValidAndWalkable(DownNeighbour) ||
					!IsValidAndWalkable(DownLeftNeighbour))
				{
					// Prevent corner-cuts
					SignpostMap[TileIndex].DownLeft = 0;
				}
				else if (IsValidAndWalkable(LeftNeighbour) &&
					IsValidAndWalkable(DownNeighbour) &&
					(SignpostMap[DownLeftTileIndex].Down > 0 ||
						SignpostMap[DownLeftTileIndex].Left > 0))
				{
					SignpostMap[TileIndex].DownLeft = 1;
				}
				else
				{
					const auto Distance = SignpostMap[DownLeftTileIndex].DownLeft;
					SignpostMap[TileIndex].DownLeft = Distance;
					SignpostMap[TileIndex].DownLeft += Distance > 0 ? 1 : -1;
				}
			}
		}
	}


#pragma endregion UpwardDiagonalsSignpostScan


#pragma region DownwardDiagonalsSignpostScan

#pragma endregion DownwardDiagonalsSignpostScan
}

bool FGPathPreprocessor::IsReady() const
{
	return bIsReady;
}
