#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAIAction.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName ActionName;
    
    UPROPERTY(Transient)
    TEnumAsByte<EInputEvent> KeyEvent;
    
    UPROPERTY(Transient)
    float Delay;
    
    UPROPERTY(Transient)
    FVector MovementAcceleration;
    
    FSDICoreUtilityAIAction();
};

