#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAIStateButtonMasherActionDef.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIStateButtonMasherActionDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ActionName;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp PressInterval;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp ReleaseInterval;
    
    UPROPERTY(EditAnywhere)
    float DoubleTapChance;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DoubleTapInterval;
    
    FSDICoreUtilityAIStateButtonMasherActionDef();
};

