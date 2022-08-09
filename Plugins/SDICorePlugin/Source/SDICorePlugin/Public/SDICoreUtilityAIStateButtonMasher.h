#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAIState.h"
#include "SDICoreUtilityAIStateButtonMasherActionDef.h"
#include "SDICoreUtilityAIStateButtonMasherAxisDef.h"
#include "SDICoreUtilityAIStateButtonMasher.generated.h"

UCLASS()
class SDICOREPLUGIN_API USDICoreUtilityAIStateButtonMasher : public USDICoreUtilityAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSDICoreUtilityAIStateButtonMasherActionDef> ActionDefs;
    
    UPROPERTY(EditAnywhere)
    TArray<FSDICoreUtilityAIStateButtonMasherAxisDef> AxisDefs;
    
public:
    USDICoreUtilityAIStateButtonMasher();
};

