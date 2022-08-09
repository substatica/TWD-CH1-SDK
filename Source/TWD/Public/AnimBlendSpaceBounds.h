#pragma once
#include "CoreMinimal.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "AnimBlendSpaceBounds.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlendSpaceBounds : public FSDIComponentReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extents;
    
    TWD_API FAnimBlendSpaceBounds();
};

