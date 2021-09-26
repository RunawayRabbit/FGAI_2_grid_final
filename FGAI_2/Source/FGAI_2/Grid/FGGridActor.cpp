#include "FGGridActor.h"

#include "DrawDebugHelpers.h"
#include "FGGridBlockComponent.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshDescription.h"
#include "FGAI_2/BetterPathfinding/FGPathPreprocessor.h"
#include "FGAI_2/Util/FVector2Int.h"
#include "FGAI_2/Util/Morton.h"

AFGGridActor::AFGGridActor()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetCastShadow(false);

	BlockStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockStaticMeshComponent"));
	BlockStaticMeshComponent->SetupAttachment(RootComponent);
	BlockStaticMeshComponent->SetCastShadow(false);

	TileText = CreateDefaultSubobject<UFGTileTextOverlay>(TEXT("TileText"));
	this->AddInstanceComponent(TileText);

	PathPreprocessor = new FGPathPreprocessor(this);
}
AFGGridActor::~AFGGridActor()
{
	delete PathPreprocessor;
}

void AFGGridActor::BeginPlay()
{
	Super::BeginPlay();
	PreprocessMap();
}

void AFGGridActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	GenerateTileList();

	GenerateGrid();

	DrawBlocks();

	PreprocessMap();

	DrawText();
}

FVector AFGGridActor::GetWorldLocationFromXY(int32 TileX, int32 TileY) const
{
	const float X = ((static_cast<float>(TileX) - GetHalfWidth()) * TileSize) + GetTileSizeHalf();
	const float Y = ((static_cast<float>(TileY) - GetHalfHeight()) * TileSize) + GetTileSizeHalf();

	return GetActorTransform().TransformPosition(FVector(X, Y, 0));
}

FVector AFGGridActor::GetWorldLocationFromCoords(const FVector2Int Coords) const
{
	return GetWorldLocationFromXY(Coords.X, Coords.Y);
}

FVector AFGGridActor::GetWorldLocationFromIndex(const int32 TileIndex) const
{
	if(!IsTileIndexValid(TileIndex))
	{
		UE_LOG(LogActor, Warning, TEXT("AFGGridActor: Invalid index passed to GetWorldLocationFromIndex. Was %d."), TileIndex);
		return FVector::ZeroVector;
	}

	return GetWorldLocationFromCoords(GetCoordsFromIndex(TileIndex));
}

FVector2Int AFGGridActor::GetCoordsFromIndex(const int32 TileIndex) const
{
	if(!IsTileIndexValid(TileIndex))
	{
		UE_LOG(LogActor, Warning, TEXT("AFGGridActor: Invalid index passed to GetCoordsFromIndex. Was %d (Valid range was 0->%d)."),
			TileIndex, GetNumTiles());
		return {0,0};
	}

	return UMorton::Decode2D(TileIndex);
}

bool AFGGridActor::GetXYFromWorldLocation(const FVector& WorldLocation, int32& TileX, int32& TileY) const
{
	if (!IsWorldLocationInsideGrid(WorldLocation))
		return false;

	const FVector RelativeGridLocation = GetActorTransform().InverseTransformPositionNoScale(WorldLocation);

	const float HeightOffset = (Height % 2) == 1 ? 0.5f : 0.0f;
	const float WidthOffset = (Width % 2) == 1 ? 0.5f : 0.0f;

	const float X = FMath::FloorToInt(WidthOffset + (RelativeGridLocation.X / TileSize)) + GetHalfWidth() - WidthOffset;
	const float Y = FMath::FloorToInt(HeightOffset + (RelativeGridLocation.Y / TileSize)) + GetHalfHeight() - HeightOffset;

	TileX = FMath::Clamp(static_cast<int32>(X), 0, Width - 1);
	TileY = FMath::Clamp(static_cast<int32>(Y), 0, Height - 1);

	return true;
}

int32 AFGGridActor::GetTileIndexFromWorldLocation(const FVector& WorldLocation) const
{
	int32 X = 0, Y = 0;
	if (GetXYFromWorldLocation(WorldLocation, X, Y))
	{
		return GetTileIndexFromXY(X, Y);
	}

	return 0;
}

bool AFGGridActor::TransformWorldLocationToTileLocation(const FVector& InWorldLocation, FVector& OutTileWorldLocation) const
{
	if (!IsWorldLocationInsideGrid(InWorldLocation))
		return false;

	int32 X = 0, Y = 0;
	if (GetXYFromWorldLocation(InWorldLocation, X, Y))
	{
		OutTileWorldLocation = GetWorldLocationFromXY(X, Y);
		return true;
	}

	return false;
}

float AFGGridActor::Heuristic(const FVector2Int A, const FVector2Int B) const
{
	// Cost of going two non-diagonal steps is 1+1 = 2.
	// Cost of going diagonal is sqrt(2).
	// This means the cost "savings" of going diagonally is (-2.0f) + Sqrt(2)
	const float Sqrt2Minus2 = -0.58578643762f;
	const float DeltaX = FMath::Abs(A.X - B.X);
	const float DeltaY = FMath::Abs(A.Y - B.Y);

	// DeltaX + DeltaY is the distance if you took no diagonals
	// Sqrt2Minus2 is the savings you make per diagonal you take
	// Min(DeltaX, DeltaY) is the maximum number of diagonals that are possible to take.
	return DeltaX + DeltaY + Sqrt2Minus2 * FMath::Min(DeltaX, DeltaY);
}

void AFGGridActor::GetOverlappingTiles(const FVector& Origin, const FVector& Extent, TArray<int32>& OutOverlappingTiles) const
{
	const FBox BlockBox = FBox::BuildAABB(Origin, Extent);

	const FVector TileExtent(GetTileSizeHalf(), GetTileSizeHalf(), GetTileSizeHalf());

	FBox TileBox;

	for (int32 Y = Height - 1; Y >= 0; --Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			const FVector TileWorldLocation = GetWorldLocationFromXY(X, Y);

			TileBox = FBox::BuildAABB(TileWorldLocation, TileExtent);
			if (TileBox.IntersectXY(BlockBox))
			{
				const int32 ArrayIndex = GetTileIndexFromXY(X, Y);
				OutOverlappingTiles.Add(ArrayIndex);
			}
		}
	}
}

void AFGGridActor::DrawBlocks()
{
	const int32 NumBlocks = TileList.Num();

	if (NumBlocks == 0)
		return;

	if (BlockMeshDescription == nullptr)
		BlockMeshDescription = UStaticMesh::CreateStaticMeshDescription(this);

	if (BlockMesh == nullptr)
		BlockMesh = NewObject<UStaticMesh>(this, UStaticMesh::StaticClass());

	BlockMeshDescription->Empty();

	BlockStaticMeshComponent->SetStaticMesh(nullptr);

	FPolygonGroupID BlockPGID = BlockMeshDescription->CreatePolygonGroup();
	FPolygonID PID;

	const float BlockSize = TileSize * 0.25f;
	const FVector BlockExtent = FVector(BlockSize, BlockSize, BlockSize * 0.25f);

	for (int32 Y = Height - 1; Y >= 0; --Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			const FVector TileRelativeLocation = GetActorTransform().InverseTransformPositionNoScale(GetWorldLocationFromXY(X, Y));
			const int32 ArrayIndex = GetTileIndexFromXY(X, Y);
			const bool bIsBlocked = TileList[ArrayIndex].bBlock;

			if (bIsBlocked)
			{
				BlockMeshDescription->CreateCube(TileRelativeLocation, BlockExtent, BlockPGID, PID, PID, PID, PID, PID, PID);
			}
		}
	}

	if (!BlockMeshDescription->IsEmpty())
	{
		TArray<UStaticMeshDescription*> BlockMeshDescriptionList;
		BlockMeshDescriptionList.Add(BlockMeshDescription);
		BlockMesh->BuildFromStaticMeshDescriptions(BlockMeshDescriptionList);
		BlockStaticMeshComponent->SetStaticMesh(BlockMesh);
	}
}

void AFGGridActor::DrawText()
{
	if(!PathPreprocessor || !PathPreprocessor->IsReady()) return;

	TileText->Clear();
	for (int i = 0; i < TileList.Num(); ++i)
		TileText->DrawTexts(this, TileList[i].Coords, PathPreprocessor->SignpostMap[i]);
}

void AFGGridActor::UpdateBlockingTiles()
{
	for (auto& Tile : TileList)
		Tile.bBlock = false;

	TArray<UFGGridBlockComponent*> AllBlocks;
	GetComponents(AllBlocks);

	TArray<int32> BlockIndices;

	for (const auto Block : AllBlocks)
	{
		const FVector Origin = Block->GetComponentLocation();
		const FVector Extents = Block->Extents * 0.5f;

		BlockIndices.Reset();
		GetOverlappingTiles(Origin, Extents, BlockIndices);

		for (int32 Index = 0, Num = BlockIndices.Num(); Index < Num; ++Index)
		{
			TileList[BlockIndices[Index]].bBlock = true;
		}
	}

	DrawBlocks();

	DrawText();
}


void AFGGridActor::GenerateTileList()
{
	if (Width < 1 || Height < 1)
		return;

	if (TileList.Num() != GetNumTiles())
	{
		TileList.SetNum(GetNumTiles());
	}

	for (int Y = 0; Y < Height; ++Y)
	{
		for (int X = 0; X < Width; ++X)
		{
			auto& Tile = TileList[GetTileIndexFromXY(X, Y)];
			Tile.Coords = {X, Y};
		}
	}
}

void AFGGridActor::PreprocessMap() const
{
	PathPreprocessor->ProcessMap();
}


void AFGGridActor::GenerateGrid()
{
	if (Width < 1 || Height < 1)
		return;

	if (MeshDescription == nullptr)
		MeshDescription = UStaticMesh::CreateStaticMeshDescription(this);

	if (GridMesh == nullptr)
		GridMesh = NewObject<UStaticMesh>(this, UStaticMesh::StaticClass());

	MeshDescription->Empty();

	FPolygonGroupID PGID = MeshDescription->CreatePolygonGroup();
	FPolygonID PID;

	float Location_X = -((Width * TileSize) * 0.5f);
	float Location_Y = -((Height * TileSize) * 0.5f);

	for (int X = 0; X < Width + 1; ++X)
	{
		float LocationOffset = X * TileSize;
		FVector Center = FVector(Location_X + LocationOffset, 0.0f, 0.0f);
		FVector Test1 = FVector(BorderSize, GetHeightSize(), BorderSize);
		MeshDescription->CreateCube(Center, GetWidthExtends(), PGID, PID, PID, PID, PID, PID, PID);
	}

	for (int Y = 0; Y < Height + 1; ++Y)
	{
		float LocationOffset = Y * TileSize;
		FVector Center = FVector(0.0f, Location_Y + LocationOffset, BorderSize);
		FVector Test = FVector(GetWidthSize(), BorderSize, BorderSize);
		MeshDescription->CreateCube(Center, GetHeightExtends(), PGID, PID, PID, PID, PID, PID, PID);
	}

	TArray<UStaticMeshDescription*> MeshDescriptionList;
	MeshDescriptionList.Add(MeshDescription);
	GridMesh->BuildFromStaticMeshDescriptions(MeshDescriptionList);
	StaticMeshComponent->SetStaticMesh(GridMesh);
}

bool AFGGridActor::IsWorldLocationInsideGrid(const FVector& WorldLocation) const
{
	const FVector RelativeGridLocation = GetActorTransform().InverseTransformPositionNoScale(WorldLocation);

	if (RelativeGridLocation.X < -GetWidthSize())
		return false;
	else if (RelativeGridLocation.X > GetWidthSize())
		return false;
	else if (RelativeGridLocation.Y < -GetHeightSize())
		return false;
	else if (RelativeGridLocation.Y > GetHeightSize())
		return false;

	return true;
}

int32 AFGGridActor::GetTileIndexFromXY(int32 TileX, int32 TileY) const
{
	if (TileX < 0 || TileX >= Width)
		return false;

	if (TileY < 0 || TileY >= Height)
		return false;

	const int32 TileIndex = UMorton::Encode2D({TileX, TileY});

	if (!IsTileIndexValid(TileIndex))
		return 0;

	return TileIndex;
}

bool AFGGridActor::IsTileIndexValid(int32 TileIndex) const
{
	const int32 NumTiles = TileList.Num();

	if (TileIndex < 0 || TileIndex >= NumTiles)
	{
		return false;
	}

	return true;
}

#if WITH_EDITOR
void AFGGridActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateBlockingTiles();

	PreprocessMap();
}
#endif // WITH_EDITOR


int32 AFGGridActor::GetTileIndexFromCoords(const FVector2Int TileCoords) const
{
	return GetTileIndexFromXY(TileCoords.X, TileCoords.Y);
}

bool AFGGridActor::IsTileValid(const FVector2Int TileCoords) const
{
	return IsTileValid(TileCoords.X, TileCoords.Y);
}

bool AFGGridActor::IsTileValid(const int32 TileX, const int32 TileY) const
{
	return TileX >= 0 &&
		TileX < Width &&
		TileY >= 0 &&
		TileY < Height;
}

TArray<FFGTileinfo> AFGGridActor::GetNeighbours(const FVector2Int TileCoords) const
{
	TArray<FFGTileinfo> RetVal;
	if (!IsTileValid(TileCoords))
	{
		return RetVal;
	}

	// @NOTE: Order matters. Structured such that adjacent entries share a common diagonal neighbour
	const int NUM_CARDINAL_DIRECTIONS = 4;
	FVector2Int Cardinals[]
	{
		{0, 1},
		{1, 0},
		{0, -1},
		{-1, 0}
	};

	// Find Cardinals
	bool CardinalIsValid[NUM_CARDINAL_DIRECTIONS]{false, false, false, false};
	for (int i = 0; i < NUM_CARDINAL_DIRECTIONS; ++i)
	{
		const auto Candidate = TileCoords + Cardinals[i];

		if (!IsTileValid(Candidate)) continue;

		const int TileIndex = GetTileIndexFromCoords(Candidate);
		if (!TileList[TileIndex].bBlock)
		{
			// Neighbour Found
			RetVal.Add(TileList[TileIndex]);
			// Use this bool array to find the diagonals later in the method.
			CardinalIsValid[i] = true;
		}
	}

	// Find (Valid) Diagonals
	for (int i = 0; i < NUM_CARDINAL_DIRECTIONS; ++i)
	{
		// If both adjacent cardinals are valid
		int j = (i + 1) % NUM_CARDINAL_DIRECTIONS;

		if (CardinalIsValid[i] && CardinalIsValid[j])
		{
			const auto Candidate = TileCoords + Cardinals[i] + Cardinals[j];


			if (!IsTileValid(Candidate)) continue;

			const int TileIndex = GetTileIndexFromCoords(Candidate);
			if (!TileList[TileIndex].bBlock)
			{
				// Neighbour Found
				RetVal.Add(TileList[TileIndex]);
			}
		}
	}

	return RetVal;
}

TArray<FFGTileinfo> AFGGridActor::GetNeighbours(const int TileIndex) const
{
	auto Coords = GetCoordsFromIndex(TileIndex);
	return GetNeighbours(Coords);
}

void AFGGridActor::DrawDebugBoxAt(const FVector2Int Coords, const FColor& Color, const float Duration) const
{
	DrawDebugBoxAt(Coords.X, Coords.Y, Color, Duration);
}

void AFGGridActor::DrawDebugBoxAt(const int32 TileX, const int32 TileY, const FColor& Color, const float Duration) const
{
	if (!IsTileValid(TileX, TileY)) return;

	const auto WorldLocation = GetWorldLocationFromXY(TileX, TileY);
	DrawDebugSolidBox(GetWorld(), WorldLocation, FVector::OneVector * (TileSize * 0.3),
	                  FQuat::Identity, Color, false, Duration);
}
