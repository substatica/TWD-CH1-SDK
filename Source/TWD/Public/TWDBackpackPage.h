#pragma once
#include "CoreMinimal.h"
#include "TWDBackpackPage.generated.h"

class ATWDPlayerInventorySlot;

USTRUCT(BlueprintType)
struct FTWDBackpackPage {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ATWDPlayerInventorySlot*> InventorySlots;
    
    TWD_API FTWDBackpackPage();
};

