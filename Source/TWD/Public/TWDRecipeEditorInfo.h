#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDRecipeEditorInfo.generated.h"

class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct FTWDRecipeEditorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDIInventoryActor> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 quantity;
    
    TWD_API FTWDRecipeEditorInfo();
};

