#pragma once
#include "CoreMinimal.h"
#include "ESDIAxis.h"
#include "DebugTransformThreshold.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FDebugTransformThreshold {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float Threshold;
    
    UPROPERTY(EditDefaultsOnly)
    float VelocityThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    ESDIAxis Axis;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckOnEveryUpdate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoBreak;
    
    UPROPERTY(Transient)
    float MaxDelta;
    
    UPROPERTY(Transient)
    float MaxVelocity;
    
    UPROPERTY(Transient)
    int32 ThresholdTriggers;
    
    UPROPERTY(Transient)
    int32 VelocityThresholdTriggers;
    
public:
    FDebugTransformThreshold();
};

