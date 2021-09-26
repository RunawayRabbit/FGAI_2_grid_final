// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TextRenderComponent.h"
#include "FGAI_2/Util/FVector2Int.h"


#include "FGTileTextOverlay.generated.h"

struct FSignpost;
struct FFGTileinfo;
UENUM()
enum class ETileTextOverlayAlign : uint8
{
	TopLeft,
	Top,
	TopRight,
	Left,
	Right,
	BottomLeft,
	Bottom,
	BottomRight
};

class AFGGridActor;

UCLASS()
class FGAI_2_API UFGTileTextOverlay : public UActorComponent
{
	GENERATED_BODY()

public:
	UFGTileTextOverlay();

	void DrawTexts(AFGGridActor* GridActor, FVector2Int Coords, const FSignpost& Signposts);
	void Clear();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float FontSize = 40.0f;

private:
	void DrawSingleText(UTextRenderComponent* TextComp, ETileTextOverlayAlign Align, FVector2Int Coords,
	                    const int8 Value) const;

	UPROPERTY(VisibleAnywhere)
	TArray<UTextRenderComponent*> TextComponents;

	int CurrentlyUsedComponents = 0;

	UPROPERTY()
	AFGGridActor* Owner;
};
