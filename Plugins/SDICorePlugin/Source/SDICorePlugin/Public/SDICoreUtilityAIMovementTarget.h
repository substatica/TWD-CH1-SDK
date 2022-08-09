#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "SDICoreUtilityAIMovementTarget.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIMovementTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntry Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bChangedTarget;
    
    FSDICoreUtilityAIMovementTarget();
};

