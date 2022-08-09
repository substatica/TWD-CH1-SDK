#pragma once
#include "CoreMinimal.h"
#include "TWDCraftingTableLevel.generated.h"

class UTWDRecipe;
class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDCraftingTableLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<ASDIInventoryActor>, int32> ResourcesToUnlockLevel;
    
    UPROPERTY(EditAnywhere)
    TSet<TSoftClassPtr<UTWDRecipe>> RecipesAtLevel;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> BuffsAtLevel;
    
    FTWDCraftingTableLevel();
};

