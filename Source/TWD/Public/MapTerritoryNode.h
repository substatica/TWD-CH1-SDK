#pragma once
#include "CoreMinimal.h"
#include "EMapTerritoryNodeType.h"
#include "MapTerritoryAttribute.h"
#include "EMapTerritoryNodeStatus.h"
#include "EMapBiomeType.h"
#include "MapTerritoryNode.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FMapTerritoryNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMapTerritoryNodeType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMapBiomeType Biome;
    
    UPROPERTY(BlueprintReadOnly)
    EMapTerritoryNodeStatus Status;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FMapTerritoryAttribute> Attributes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<int32> Connections;
    
    FMapTerritoryNode();
};

