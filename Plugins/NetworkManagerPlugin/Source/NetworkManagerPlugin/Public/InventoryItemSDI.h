#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemMetadata.h"
#include "InventoryItemSDI.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FInventoryItemSDI {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid uid;
    
    UPROPERTY()
    int32 quantity;
    
    UPROPERTY()
    uint8 slotIdx;
    
    UPROPERTY()
    FInventoryItemMetadata MetaData;
    
    FInventoryItemSDI();
};

