#pragma once
#include "CoreMinimal.h"
#include "ESDITransformSpace.h"
#include "SDITimestampTransform_NetQuantize.h"
#include "SDISpaceTimestampTransform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISpaceTimestampTransform_NetQuantize : public FSDITimestampTransform_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDITransformSpace Space;
    
    FSDISpaceTimestampTransform_NetQuantize();
};

