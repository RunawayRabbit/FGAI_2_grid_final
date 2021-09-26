
#include "FGSimpleAStar.h"


#include "FGPath.h"
#include "FGAI_2/Grid/FGGridActor.h"

FGSimpleAStar::FGSimpleAStar(AFGGridActor* GridActor)
    : GridActor(GridActor){}

FGPath* FGSimpleAStar::FindPath(const FVector Start, const FVector End)
{
	//@NOTE: G array serves double-duty as a closed list. If it exists in the map, we've visited it.

	// Setup open list for first pass
	const int32 StartIndex = GridActor->GetTileIndexFromWorldLocation(Start);
	OpenList.Push(StartIndex, 0);
	G.Add(StartIndex, 0.0f);

	// Establish base case
	const int32 EndIndex = GridActor->GetTileIndexFromWorldLocation(End);
	const FVector2Int EndCoords = GridActor->GetCoordsFromIndex(EndIndex);

	while(!OpenList.IsEmpty())
	{
		const int32 CurrentIndex = OpenList.Pop();

		const FVector2Int CurrentCoords = GridActor->GetCoordsFromIndex(CurrentIndex);

		GridActor->DrawDebugBoxAt(CurrentCoords, FColor::Orange, 3.0f);

		for (const auto& Neighbour : GridActor->GetNeighbours(CurrentCoords))
		{
			const int32 NeighbourIndex = GridActor->GetTileIndexFromCoords(Neighbour.Coords);

			if(Neighbour.Coords == EndCoords)
			{
				Breadcrumbs.Add(NeighbourIndex, CurrentIndex);
				GridActor->DrawDebugBoxAt(EndCoords, FColor::White, 3.0f);
				return ReturnFinalPath(StartIndex, EndIndex);
			}

			//@NOTE: Heuristic very neatly gives me the exact cost from this location to it's immediate neighbours.
			const float NewG = *G.Find(CurrentIndex) + GridActor->Heuristic(CurrentCoords, Neighbour.Coords);
			const float H = GridActor->Heuristic(Neighbour.Coords, EndCoords);
			const float F = NewG + H;

			if(OpenList.GetPrioFor(NeighbourIndex) < F)
			{
				// Better path to this node already exists in the open list.
				continue;
			}

			const auto OldG = G.Find(NeighbourIndex);
			if(OldG && *OldG < NewG)
			{
				// Better path to this node already exists in the closed list.
				continue;
			}

			Breadcrumbs.Add(NeighbourIndex, CurrentIndex);
			G.Add(NeighbourIndex, NewG);
			OpenList.Push(NeighbourIndex, F);
			GridActor->DrawDebugBoxAt(Neighbour.Coords, FColor::Red, 4.0f);
		}
	}

	// No path available, return an empty path.
	return new FGPath(GridActor);
}

FGPath* FGSimpleAStar::ReturnFinalPath(const int32 Start, const int32 End)
{
	FGPath* Path = new FGPath(GridActor);
	int32 Current = End;
	while(Current != Start)
	{
		Path->AddToPath(Current);
		Current = Breadcrumbs[Current];

		const auto Coords = GridActor->GetCoordsFromIndex(Current);
		GridActor->DrawDebugBoxAt(Coords, FColor::Green, 2.0f);
	}

	Path->Finalize();
	return Path;
}


