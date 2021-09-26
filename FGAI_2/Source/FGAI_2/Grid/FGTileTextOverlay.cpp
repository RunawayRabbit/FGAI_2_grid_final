// Fill out your copyright notice in the Description page of Project Settings.


#include "FGTileTextOverlay.h"

#include "FGGridActor.h"
#include "FGAI_2/BetterPathfinding/FGPathPreprocessor.h"
#include "Kismet/KismetMathLibrary.h"

UFGTileTextOverlay::UFGTileTextOverlay() {}

void UFGTileTextOverlay::DrawTexts(AFGGridActor* GridActor, FVector2Int Coords, const FSignpost& Signposts)
{
	Owner = GridActor;

	//@TODO: Get this working again.

	// Aquire/Reserve text components for use
	while(TextComponents.Num() < CurrentlyUsedComponents + 8)
	{
		auto Name = FString::Printf(TEXT("TextComponent #%d"), TextComponents.Num());
		auto TextRenderComp = NewObject<UTextRenderComponent>(Owner, FName(Name));
		TextComponents.Add(TextRenderComp);
    }

	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::TopLeft,     Coords, Signposts.UpLeft);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::Top,         Coords, Signposts.Up);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::TopRight,    Coords, Signposts.Upright);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::Left,        Coords, Signposts.Left);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::Right,       Coords, Signposts.Right);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::BottomLeft,  Coords, Signposts.DownLeft);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::Bottom,      Coords, Signposts.Down);
	//DrawSingleText(TextComponents[CurrentlyUsedComponents++], ETileTextOverlayAlign::BottomRight, Coords, Signposts.DownRight);

}

void UFGTileTextOverlay::Clear()
{
	CurrentlyUsedComponents = 0;
	for (int i = TextComponents.Num()-1; i >=0 ; --i)
	{
		if(!TextComponents[i] && IsValid(TextComponents[i]))
			TextComponents[i]->Deactivate();
		else
			TextComponents.RemoveAt(i);
	}
}

void UFGTileTextOverlay::DrawSingleText(UTextRenderComponent* TextComp, ETileTextOverlayAlign Align, FVector2Int Coords,
                                      const int8 Value) const
{
	TextComp->Activate();
	TextComp->SetWorldSize(FontSize);

	const FRotator Rot(90.0f, 0.0f, 0.0f);
	TextComp->SetRelativeRotation(Rot);

	const auto Text = FText::FromString(FString::FromInt(Value));
	TextComp->SetText(Text);

	const auto Color = UKismetMathLibrary::LinearColorLerp(FLinearColor::Green, FLinearColor::Red, Value/10.0f);
	TextComp->SetTextRenderColor(Color.ToFColor(false));

	EVerticalTextAligment Aligment;
	EHorizTextAligment AligmaBalls;
	FVector Location = Owner->GetWorldLocationFromCoords(Coords);
	Location.X += 4.0f;
	Location.Y -= 9.0f;
	Location.Z += 8.0f;
	const float Offset = Owner->GetTileSizeHalf() - Owner->BorderSize - 2.0f;

	switch (Align)
	{
	case ETileTextOverlayAlign::TopLeft:
		Location.X += 0;
		Location.Y += 2*Offset;
		Aligment = EVRTA_TextTop;
		AligmaBalls = EHTA_Left;
		break;

	case ETileTextOverlayAlign::Top:
		Location.X += Offset;
		Location.Y += 2*Offset;
		Aligment = EVRTA_TextTop;
		AligmaBalls = EHTA_Center;
		break;

	case ETileTextOverlayAlign::TopRight:
		Location.X += 2*Offset;
		Location.Y += 2*Offset;
		Aligment = EVRTA_TextTop;
		AligmaBalls = EHTA_Right;
		break;

	case ETileTextOverlayAlign::Left:
		Location.X += 0;
		Location.Y += Offset;
		Aligment = EVRTA_TextCenter;
		AligmaBalls = EHTA_Left;
		break;

	case ETileTextOverlayAlign::Right:
		Location.X += 2*Offset;
		Location.Y += Offset;
		Aligment = EVRTA_TextCenter;
		AligmaBalls = EHTA_Right;
		break;

	case ETileTextOverlayAlign::BottomLeft:
		Location.X += 0;
		Location.Y += 0;
		Aligment = EVRTA_TextBottom;
		AligmaBalls = EHTA_Left;
		break;

	case ETileTextOverlayAlign::Bottom:
		Location.X += Offset;
		Location.Y += 0;
		Aligment = EVRTA_TextBottom;
		AligmaBalls = EHTA_Center;
		break;

	case ETileTextOverlayAlign::BottomRight:
		Location.X += 2*Offset;
		Location.Y += 0;
		Aligment = EVRTA_TextBottom;
		AligmaBalls = EHTA_Right;
		break;

	default:
		Aligment = EVRTA_TextCenter;
		AligmaBalls = EHTA_Center;
	}

	Location.X -= Owner->GetTileSizeHalf() - Owner->BorderSize;
	Location.Y -= Owner->GetTileSizeHalf() - Owner->BorderSize;
	TextComp->SetRelativeLocation(Location);

	TextComp->SetVerticalAlignment(Aligment);
	TextComp->SetHorizontalAlignment(AligmaBalls);
}
