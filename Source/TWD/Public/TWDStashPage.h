#pragma once
#include "CoreMinimal.h"
#include "TWDStashPage.generated.h"

class ATWDPlayerInventorySlot;

USTRUCT(BlueprintType)
struct FTWDStashPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<ATWDPlayerInventorySlot*> InventorySlots;
    
    TWD_API FTWDStashPage();
};

