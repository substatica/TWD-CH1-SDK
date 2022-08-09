#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinReplicationData.h"
#include "TWDWoundEllipsoid.h"
#include "TWDSavedItemData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSavedItemData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid uid;
    
    UPROPERTY()
    float Durability;
    
    UPROPERTY()
    int32 quantity;
    
    UPROPERTY()
    FString SerializationString;
    
    UPROPERTY()
    TMap<FString, int32> MappedIntegers;
    
    UPROPERTY()
    FSDISkinReplicationData SkinData;
    
    UPROPERTY()
    TArray<FTWDWoundEllipsoid> WoundEllipsoids;
    
    FTWDSavedItemData();
};

