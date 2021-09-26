#pragma once

#include "FGTileTextOverlay.h"
#include "FGAI_2/Util/FVector2Int.h"
#include "GameFramework/Actor.h"
#include "FGGridActor.generated.h"

class FGPathPreprocessor;
USTRUCT(BlueprintType)
struct FFGTileinfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Tile")
	bool bBlock = false;

	UPROPERTY(BlueprintReadWrite, Category = "Tile")
	FVector2Int Coords;
};

class UStaticMeshComponent;
class UStaticMesh;
class UStaticMeshDescription;

UCLASS()
class FGAI_2_API AFGGridActor : public AActor
{
	GENERATED_BODY()
public:
	AFGGridActor();
	~AFGGridActor();

	virtual void BeginPlay() override;

	void GenerateTileList();
	void PreprocessMap() const;
	/*
	* Called whenever placed in the editor or world, having its transform changed etc.
	* Responsible for eventually calling the infamous ConstructionScript in blueprint.
	*/
	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY()
	UStaticMeshComponent* StaticMeshComponent = nullptr;

	UPROPERTY()
	UStaticMeshComponent* BlockStaticMeshComponent = nullptr;

	UPROPERTY()
	UStaticMesh* GridMesh = nullptr;

	UPROPERTY()
	UStaticMesh* BlockMesh = nullptr;

	UPROPERTY()
	UStaticMeshDescription* MeshDescription = nullptr;

	UPROPERTY()
	UStaticMeshDescription* BlockMeshDescription = nullptr;

	UFUNCTION(BlueprintPure, Category = "Grid")
	FVector GetWorldLocationFromXY(int32 TileX, int32 TileY) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	FVector GetWorldLocationFromCoords(FVector2Int Coords) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
    FVector GetWorldLocationFromIndex(const int32 TileIndex) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	FVector2Int GetCoordsFromIndex(const int32 TileIndex) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	bool GetXYFromWorldLocation(const FVector& WorldLocation, int32& TileX, int32& TileY) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	int32 GetTileIndexFromWorldLocation(const FVector& WorldLocation) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	bool TransformWorldLocationToTileLocation(const FVector& InWorldLocation, FVector& OutTileWorldLocation) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	float Heuristic(const FVector2Int A, const FVector2Int B) const;

	/*
	* Returns a list of indices correlating to the location of a tile within the TileList
	*/
	void GetOverlappingTiles(const FVector& Origin, const FVector& Extent, TArray<int32>& OutOverlappingTiles) const;

	void DrawBlocks();

	void DrawText();

	void UpdateBlockingTiles();

	void GenerateGrid();

	bool IsWorldLocationInsideGrid(const FVector& WorldLocation) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	int32 GetTileIndexFromXY(int32 TileX, int32 TileY) const;

	UFUNCTION(BlueprintPure, Category = "Grid")
	int32 GetTileIndexFromCoords(FVector2Int TileCoords) const;

	bool IsTileIndexValid(int32 TileIndex) const;

	bool IsTileValid(FVector2Int TileCoords) const;


#if WITH_EDITOR
	/*
	* This is called whenever a property, on this Actor, is edited in the editor.
	* Only available in the editor. If you forget WITH_EDITOR you will get a compile error when compiling the non-editor build
	*/
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;


#endif // WITH_EDITOR

	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetTileSizeHalf() const { return TileSize * 0.5f; }
	UFUNCTION(BlueprintPure, Category = "Grid")
	int32 GetNumTiles() const { return Width * Height; }
	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetGridSize() const { return GetNumTiles() * TileSize; }

	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetHalfWidth() const { return static_cast<float>(Width) * 0.5f; }
	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetHalfHeight() const { return static_cast<float>(Height) * 0.5f; }

	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetWidthSize() const { return (static_cast<float>(Width) * GetTileSizeHalf()) + BorderSize; }
	UFUNCTION(BlueprintPure, Category = "Grid")
	float GetHeightSize() const { return (static_cast<float>(Height) * GetTileSizeHalf()) + BorderSize; }

	UFUNCTION(BlueprintPure, Category = "Grid")
	FVector GetWidthExtends() const { return FVector(BorderSize, GetHeightSize(), BorderSize); }
	UFUNCTION(BlueprintPure, Category = "Grid")
	FVector GetHeightExtends() const { return FVector(GetWidthSize(), BorderSize, BorderSize); }

	/*
	* Initializes to the size of the number of tiles in the grid.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Grid")
	TArray<FFGTileinfo> TileList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid, meta = (ClampMin = 1))
	int Width = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid, meta = (ClampMin = 1))
	int Height = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid, meta = (ClampMin = 0.1))
	float BorderSize = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid)
	float TileSize = 500.0f;


	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool IsTileValid(const int32 TileX, const int32 TileY) const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	TArray<FFGTileinfo> GetNeighbours(const FVector2Int TileCoords) const;

	TArray<FFGTileinfo> GetNeighbours(const int TileIndex) const;

	void DrawDebugBoxAt(FVector2Int Coords, const FColor& Color, float Duration) const;
	void DrawDebugBoxAt(const int32 TileX, const int32 TileY, const FColor& Color, float Duration) const;

	UPROPERTY()
	UFGTileTextOverlay* TileText;

	FGPathPreprocessor* PathPreprocessor;

};
