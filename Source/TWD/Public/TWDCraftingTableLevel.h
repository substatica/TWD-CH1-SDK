#pragma once
#include "CoreMinimal.h"
#include "TWDCraftingTableLevel.generated.h"

class UTWDRecipe;
class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDCraftingTableLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASDIInventoryActor>, int32> ResourcesToUnlockLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UTWDRecipe>> RecipesAtLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> BuffsAtLevel;
    
    FTWDCraftingTableLevel();
};

