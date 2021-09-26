#pragma once

#include "FVector2Int.generated.h"

struct FVector2Int;
FVector2Int operator+(const FVector2Int& A, const FVector2Int& B);
FVector2Int operator-(const FVector2Int& A, const FVector2Int& B);

USTRUCT(BlueprintType)
struct FVector2Int
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Y;

	bool operator==(const FVector2Int& Other) const
	{
		return X == Other.X &&
            Y == Other.Y;
	}

	bool operator!=(const FVector2Int& Other) const
	{
		return !(*this == Other);
	}

	FVector2Int operator-() const
	{
		return {-X, -Y};
	}

	void operator+=(const FVector2Int& Other)
	{
		*this = *this + Other;
	}

	void operator-=(const FVector2Int& Other)
	{
		*this += -Other;
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("[%d, %d]"), X, Y);
	}
};

inline FVector2Int operator+(const FVector2Int& A, const FVector2Int& B)
{
	return {A.X + B.X, A.Y + B.Y};
}

inline FVector2Int operator-(const FVector2Int& A, const FVector2Int& B)
{
	return A+(-B);
}
