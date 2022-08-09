#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAIState.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAITimer.h"
#include "SDICoreUtilityAIAimSettings.h"
#include "SDICoreUtilityAIStateWander.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreUtilityAIStateWander : public USDICoreUtilityAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAITimer DestResetTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp WanderDestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAIAimSettings WanderAimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderAimPitchMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderAimTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderAimReflectionExp;
    
public:
    USDICoreUtilityAIStateWander();
};

