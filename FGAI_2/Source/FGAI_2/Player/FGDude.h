// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "FGAI_2/Pathfinding/FGPath.h"
#include "GameFramework/Actor.h"
#include "FGDude.generated.h"

UCLASS()
class FGAI_2_API AFGDude : public AActor
{
	GENERATED_BODY()

public:
	AFGDude();

protected:
	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	//
	// Selection Stuff
	//

public:
	void Select();
	void Deselect();

protected:
	virtual void NotifyActorOnClicked(FKey ButtonPressed) override;

private:
	UPROPERTY()
	bool bIsSelected = false;

	//
	// Movement Stuff
	//
public:
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveTo(FVector TargetLocation);

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 800.0f;

protected:
	void DoMovement(const float DeltaSeconds);
	FGPath* Path = nullptr;


	//
	// Debug Stuff
	//

public:
	void DebugPrintStatus() const;

};
