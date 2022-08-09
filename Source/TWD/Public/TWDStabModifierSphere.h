#pragma once
#include "CoreMinimal.h"
#include "SDIComponentReplacementSphere.h"
#include "TWDStabModifierSphere.generated.h"

USTRUCT(BlueprintType)
struct FTWDStabModifierSphere : public FSDIComponentReplacementSphere {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    float StabPushMotionMultiplier;
    
    UPROPERTY(VisibleDefaultsOnly)
    float StabPullMotionMultiplier;
    
    TWD_API FTWDStabModifierSphere();
};

