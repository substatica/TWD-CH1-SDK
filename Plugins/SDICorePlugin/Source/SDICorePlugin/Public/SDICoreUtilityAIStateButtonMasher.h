#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAIState.h"
#include "SDICoreUtilityAIStateButtonMasherActionDef.h"
#include "SDICoreUtilityAIStateButtonMasherAxisDef.h"
#include "SDICoreUtilityAIStateButtonMasher.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreUtilityAIStateButtonMasher : public USDICoreUtilityAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDICoreUtilityAIStateButtonMasherActionDef> ActionDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDICoreUtilityAIStateButtonMasherAxisDef> AxisDefs;
    
public:
    USDICoreUtilityAIStateButtonMasher();
};

