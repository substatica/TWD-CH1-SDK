#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDRecipeInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDRecipeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid ItemGuid;
    
    UPROPERTY(BlueprintReadOnly)
    int32 quantity;
    
    TWD_API FTWDRecipeInfo();
};

