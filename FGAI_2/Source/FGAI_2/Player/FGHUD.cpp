// Fill out your copyright notice in the Description page of Project Settings.


#include "FGHUD.h"

#include "FGDude.h"
#include "FGPlayerController.h"
#include "Kismet/GameplayStatics.h"

AFGHUD::AFGHUD()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFGHUD::OnSelectPress()
{
	bIsDrawingBox = true;

	UGameplayStatics::GetPlayerController(GetWorld(), 0)
		->GetMousePosition(Start.X, Start.Y);


	// Clear our local buffer
	CurrentSelection.Empty();
}

void AFGHUD::OnSelectRelease()
{
	bIsDrawingBox = false;

	if(!bIsSelecting) return;
	bIsSelecting = false;

	//@TODO: Only if shift key is held?
	// Deselect all units
	auto PlayerController = Cast<AFGPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	if(!PlayerController)
	{
		UE_LOG(LogActor, Warning, TEXT("AFGHUD %s could not cast the PlayerController to AFGPlayerController!"), *this->GetName());
	}
	PlayerController->ClearSelectedUnits();

	// Add the new selection
	for (auto Dude : CurrentSelection)
	{
		Dude->Select();
	}
}

void AFGHUD::DrawHUD()
{
	Super::DrawHUD();

	if(!bIsDrawingBox) return;

	// Draw the selection box.
	Draw2DLine(Start.X, Start.Y, Start.X, End.Y, BorderColor);
	Draw2DLine(End.X, Start.Y, End.X, End.Y, BorderColor);
	Draw2DLine(Start.X, Start.Y, End.X, Start.Y, BorderColor);
	Draw2DLine(Start.X, End.Y, End.X, End.Y, BorderColor);

	DrawRect(FillColor, Start.X, Start.Y, End.X-Start.X, End.Y-Start.Y);

	// Update cursor position
	UGameplayStatics::GetPlayerController(GetWorld(), 0)
    ->GetMousePosition(End.X, End.Y);

	if(!bIsSelecting)
	{
		// Don't start box selecting if we aren't dragging a big enough box.
		if(FVector2D::DistSquared(Start, End) > BoxThresholdSize)
		{
			bIsSelecting = true;
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::White,
		TEXT("Beginning box selection"));

		}
	}
	else
	{
		GetActorsInSelectionRectangle<AFGDude>( Start, End, CurrentSelection,
    true, false);
	}
}
