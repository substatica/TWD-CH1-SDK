#pragma once
#include "CoreMinimal.h"
#include "FloatOscillator.h"
#include "SDICoreUtilityAIStateButtonMasherAxisDef.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIStateButtonMasherAxisDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatOscillator Oscillator;
    
    FSDICoreUtilityAIStateButtonMasherAxisDef();
};

