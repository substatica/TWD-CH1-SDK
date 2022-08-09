#pragma once
#include "CoreMinimal.h"
#include "SDITimestampTransform_NetQuantize.h"
#include "ESDITransformSpace.h"
#include "SDISpaceTimestampTransform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISpaceTimestampTransform_NetQuantize : public FSDITimestampTransform_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDITransformSpace Space;
    
    FSDISpaceTimestampTransform_NetQuantize();
};

