#pragma once
#include "CoreMinimal.h"
#include "EMapTerritoryNodeStatus.h"
#include "EMapTerritoryNodeType.h"
#include "EMapBiomeType.h"
#include "MapTerritoryAttribute.h"
#include "MapTerritoryNode.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FMapTerritoryNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTerritoryNodeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapBiomeType Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTerritoryNodeStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTerritoryAttribute> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Connections;
    
    FMapTerritoryNode();
};

