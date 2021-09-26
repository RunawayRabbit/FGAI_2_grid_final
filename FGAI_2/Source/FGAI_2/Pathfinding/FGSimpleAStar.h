#pragma once
#include "TPriorityQueue.h"

class AFGGridActor;
class FGPath;

class FGSimpleAStar
{
public:
	explicit FGSimpleAStar(AFGGridActor* GridActor);
	FGPath* FindPath(const FVector Start, const FVector End);

private:
	FGPath* ReturnFinalPath(const int32 Start, const int32 End);

	AFGGridActor* GridActor = nullptr;
	TPriorityQueue<int32> OpenList; // ints represent tile indices
	TMap<int32, float> G;   // ints represent tile indices, floats are G values
	TMap<int32, int32> Breadcrumbs; // Key: From, Value: To.
};
