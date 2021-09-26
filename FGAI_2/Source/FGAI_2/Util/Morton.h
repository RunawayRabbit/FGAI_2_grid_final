#pragma once

// "Borrowed" from the delicious Fabian "rygorous" Giesen
// https://fgiesen.wordpress.com/2009/12/13/decoding-morton-codes/

#include "FVector2Int.h"

#include "Morton.generated.h"

UCLASS()
class UMorton final : public UObject
{
	GENERATED_UCLASS_BODY()

	/** Translate coordinates into a 2D Morton index */
	static FORCEINLINE uint32 Encode2D(const FVector2Int Coordinate)
	{
		return Encode2D(Coordinate.X, Coordinate.Y);
	}
	/** Translate X and Y into a 2D Morton index */
	static FORCEINLINE uint32 Encode2D(const uint32 X, const uint32 Y)
	{
		return (Part1By1(Y) << 1) + Part1By1(X);
	}

	/** Translate a 2D Morton index into Coordinates */
	static FORCEINLINE FVector2Int Decode2D(const uint32 I)
	{
		return {
		static_cast<int32>(Compact1By1(I >> 0)),
		static_cast<int32>(Compact1By1(I >> 1))};
	}
	/** Translate a 2D Morton index into Coordinates */
	static FORCEINLINE void Decode2D(const uint32 I, uint32& OutX, uint32& OutY)
	{
		OutX = Compact1By1(I >> 0);
		OutY = Compact1By1(I >> 1);
	}


private:
	static FORCEINLINE uint32 Part1By1(uint32 I)
	{
		I &= 0X0000ffff;				 // X = ---- ---- ---- ---- fedc ba98 7654 3210
		I = (I ^ (I << 8)) & 0X00ff00ff; // X = ---- ---- fedc ba98 ---- ---- 7654 3210
		I = (I ^ (I << 4)) & 0X0f0f0f0f; // X = ---- fedc ---- ba98 ---- 7654 ---- 3210
		I = (I ^ (I << 2)) & 0X33333333; // X = --fe --dc --ba --98 --76 --54 --32 --10
		I = (I ^ (I << 1)) & 0X55555555; // X = -f-e -d-c -b-a -9-8 -7-6 -5-4 -3-2 -1-0
		return I;
	}

	static FORCEINLINE uint32 Compact1By1(uint32 I)
	{
		I &= 0X55555555;				 // X = -f-e -d-c -b-a -9-8 -7-6 -5-4 -3-2 -1-0
		I = (I ^ (I >> 1)) & 0X33333333; // X = --fe --dc --ba --98 --76 --54 --32 --10
		I = (I ^ (I >> 2)) & 0X0f0f0f0f; // X = ---- fedc ---- ba98 ---- 7654 ---- 3210
		I = (I ^ (I >> 4)) & 0X00ff00ff; // X = ---- ---- fedc ba98 ---- ---- 7654 3210
		I = (I ^ (I >> 8)) & 0X0000ffff; // X = ---- ---- ---- ---- fedc ba98 7654 3210
		return I;
	}
};


inline UMorton::UMorton(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {}
