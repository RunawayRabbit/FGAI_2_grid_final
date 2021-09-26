
#include "FGPathfinder.h"

#include "FGGridActor.h"


FGPathfinder::FGPathfinder(AFGGridActor& Grid, const FVector Start, const FVector End)
{
	int32 StartX, StartY, EndX, EndY;
	Grid.GetXYFromWorldLocation(Start,StartX, StartY);
	Grid.GetXYFromWorldLocation(Start,EndX, EndY);

	int32 CurX = StartX;
	int32 CurY = StartY;
	while (CurX >= 0)
	{
		Grid.DrawDebugBoxAt(--CurX, CurY, FColor::Blue, 2.0f);
	}
}
