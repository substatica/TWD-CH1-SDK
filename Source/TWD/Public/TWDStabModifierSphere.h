#pragma once
#include "CoreMinimal.h"
#include "SDIComponentReplacementSphere.h"
#include "TWDStabModifierSphere.generated.h"

USTRUCT(BlueprintType)
struct FTWDStabModifierSphere : public FSDIComponentReplacementSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPushMotionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabPullMotionMultiplier;
    
    TWD_API FTWDStabModifierSphere();
};

