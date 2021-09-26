#pragma once

#include "GameFramework/Pawn.h"
#include "FGPlayer.generated.h"

class UCameraComponent;
class AFGGridActor;

UCLASS()
class AFGPlayer : public APawn
{
	GENERATED_BODY()
public:
	AFGPlayer();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	UCameraComponent* CameraComponent = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Player")
	AFGGridActor* CurrentGridActor = nullptr;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player")
    float HorizontalMovementSpeed = 3000.0f;
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player")
    float VerticalMovementSpeed = 1000.0f;


	UFUNCTION(BlueprintImplementableEvent, Category = "Player", meta = (DisplayName = "Set Start"))
    void BP_SetStart(const FVector Position);

	UFUNCTION(BlueprintImplementableEvent, Category = "Player", meta = (DisplayName = "Set End"))
    void BP_SetEnd(const FVector Position);

	UFUNCTION(BlueprintPure, Category = "Player")
	bool GetMouseLocationOnGrid(FVector& OutWorldMouseLocation) const;

private:
	void UpdateMovement(float DeltaTime);

	void Handle_Forward(float Value);
	void Handle_Right(float Value);
	void Handle_Up(float Value);
	void Handle_SetStart();
	void Handle_SetEnd();

	FVector InputVector;


public:
	// Shit that needs to get moved at some point


};
