#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "SDICoreUtilityAIMovementTarget.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIMovementTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAITargetEntry Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bChangedTarget;
    
    FSDICoreUtilityAIMovementTarget();
};

