#pragma once
#include "CoreMinimal.h"
#include "SDICoreFXCurveAnimation.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreFXCurveAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* Curve;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLooping;
    
    UPROPERTY(Transient)
    float MinTime;
    
    UPROPERTY(Transient)
    float MaxTime;
    
    UPROPERTY(Transient)
    float Time;
    
public:
    FSDICoreFXCurveAnimation();
};

