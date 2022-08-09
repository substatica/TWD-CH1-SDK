#pragma once
#include "CoreMinimal.h"
#include "FloatOscillator.h"
#include "SDICoreUtilityAIStateButtonMasherAxisDef.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIStateButtonMasherAxisDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AxisName;
    
    UPROPERTY(EditAnywhere)
    FFloatOscillator Oscillator;
    
    FSDICoreUtilityAIStateButtonMasherAxisDef();
};

