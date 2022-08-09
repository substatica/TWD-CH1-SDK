#pragma once
#include "CoreMinimal.h"
#include "SDIExternalCurveAnimation.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIExternalCurveAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CurveEngageSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CurveDisengageSpeed;
    
protected:
    UPROPERTY(Transient)
    float CurveTime;
    
    UPROPERTY(Transient)
    float CachedCurveMinTime;
    
    UPROPERTY(Transient)
    float CachedCurveMaxTime;
    
    UPROPERTY(Transient)
    bool bCachedCurveValid;
    
public:
    FSDIExternalCurveAnimation();
};

