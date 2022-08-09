#pragma once
#include "CoreMinimal.h"
#include "TWDPersistentLevelItemData.h"
#include "TWDPersistentLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDPersistentLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bValid;
    
    UPROPERTY()
    TArray<FTWDPersistentLevelItemData> PersistentInventory;
    
    FTWDPersistentLevelSaveData();
};

