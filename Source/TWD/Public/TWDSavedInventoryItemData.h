#pragma once
#include "CoreMinimal.h"
#include "TWDSavedItemData.h"
#include "TWDSavedInventoryItemData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSavedInventoryItemData : public FTWDSavedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 slotIdx;
    
    FTWDSavedInventoryItemData();
};

