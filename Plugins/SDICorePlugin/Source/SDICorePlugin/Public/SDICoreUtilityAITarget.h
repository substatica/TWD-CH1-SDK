#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAITarget.generated.h"

class USDICoreUtilityAI;
class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAITarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USDICoreUtilityAI* Owner;
    
public:
    UPROPERTY(EditAnywhere)
    FRFloatExp MaintainTime;
    
    UPROPERTY(EditAnywhere)
    float PriorityForceSwitchThreshold;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntry CachedTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bChangedTarget;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoredTargets;
    
    FSDICoreUtilityAITarget();
};

