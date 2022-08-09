#pragma once
#include "CoreMinimal.h"
#include "SDIActiveHapticFeedbackEffect.generated.h"

class UHapticFeedbackEffect_Base;

USTRUCT()
struct SDIVRPLAYERPLUGIN_API FSDIActiveHapticFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UHapticFeedbackEffect_Base* HapticEffect;
    
    UPROPERTY(Transient)
    bool bLoop;
    
    UPROPERTY(Transient)
    float PlayTime;
    
    UPROPERTY(Transient)
    float Scale;
    
    FSDIActiveHapticFeedbackEffect();
};

