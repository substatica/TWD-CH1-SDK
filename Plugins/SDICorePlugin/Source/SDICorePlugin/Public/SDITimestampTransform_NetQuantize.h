#pragma once
#include "CoreMinimal.h"
#include "SDITransform_NetQuantize.h"
#include "SDITimestampTransform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDITimestampTransform_NetQuantize : public FSDITransform_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    FSDITimestampTransform_NetQuantize();
};

