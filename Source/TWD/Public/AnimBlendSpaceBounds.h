#pragma once
#include "CoreMinimal.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "AnimBlendSpaceBounds.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlendSpaceBounds : public FSDIComponentReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FVector RelCenter;
    
    UPROPERTY(VisibleDefaultsOnly)
    FVector Extents;
    
    TWD_API FAnimBlendSpaceBounds();
};

