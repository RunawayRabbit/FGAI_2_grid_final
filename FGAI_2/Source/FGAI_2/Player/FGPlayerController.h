#pragma once

#include "GameFramework/PlayerController.h"
#include "FGPlayerController.generated.h"

class AFGDude;

UCLASS()
class AFGPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	AFGPlayerController();

	void AddUnitToSelection(AFGDude* Unit);
	void RemoveUnitFromSelection(AFGDude* Unit);
	void ClearSelectedUnits();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AFGDude*> SelectedUnits;
};
