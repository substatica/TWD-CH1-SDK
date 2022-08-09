#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ERequiredInventoryType.h"
#include "ETWDLootType.h"
#include "TWDRequiredInventory.generated.h"

class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDRequiredInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERequiredInventoryType RequiredType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDIInventoryActor> InventoryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETWDLootType LootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    FTWDRequiredInventory();
};

