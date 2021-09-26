#include "FGPlayerController.h"

#include "FGDude.h"

AFGPlayerController::AFGPlayerController()
{
	bShowMouseCursor = true;
}

void AFGPlayerController::AddUnitToSelection(AFGDude* Unit)
{
	SelectedUnits.AddUnique(Unit);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue,
        FString::Printf(TEXT("Currently selecting %d Units."), SelectedUnits.Num()));

}

void AFGPlayerController::RemoveUnitFromSelection(AFGDude* Unit)
{
	SelectedUnits.RemoveSwap(Unit);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue,
        FString::Printf(TEXT("Currently selecting %d Units."), SelectedUnits.Num()));

}

void AFGPlayerController::ClearSelectedUnits()
{
	for (auto Unit : SelectedUnits)
	{
		Unit->Deselect();
	}

	SelectedUnits.SetNum(0, false);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue,
        FString::Printf(TEXT("Currently selecting %d Units."), SelectedUnits.Num()));

}
