// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/HUD.h"

#include "FGHUD.generated.h"

class AFGDude;
/**
 *
 */
UCLASS()
class FGAI_2_API AFGHUD : public AHUD
{
	GENERATED_BODY()

	public:
	AFGHUD();

	UFUNCTION(BlueprintCallable)
	void OnSelectPress();

	UFUNCTION(BlueprintCallable)
	void OnSelectRelease();

	protected:
	virtual void DrawHUD() override;

	private:
	FVector2D Start;
	FVector2D End;

	UPROPERTY(EditAnywhere)
	FLinearColor FillColor = FLinearColor::Blue * 0.15f;

	UPROPERTY(EditAnywhere)
	FColor BorderColor = FColor::Blue;

	UPROPERTY(EditAnywhere)
	float BoxThresholdSize = 20.0f
	;
	bool bIsDrawingBox = false;
	bool bIsSelecting = false;
	private:
	TArray<AFGDude*> CurrentSelection;
};
