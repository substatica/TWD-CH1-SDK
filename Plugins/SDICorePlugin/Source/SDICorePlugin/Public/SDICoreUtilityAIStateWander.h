#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAITimer.h"
#include "SDICoreUtilityAIState.h"
#include "SDICoreUtilityAIAimSettings.h"
#include "SDICoreUtilityAIStateWander.generated.h"

UCLASS()
class SDICOREPLUGIN_API USDICoreUtilityAIStateWander : public USDICoreUtilityAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSDICoreUtilityAITimer DestResetTimer;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp WanderDestDistance;
    
    UPROPERTY(EditAnywhere)
    FSDICoreUtilityAIAimSettings WanderAimSettings;
    
    UPROPERTY(EditAnywhere)
    float WanderAimPitchMul;
    
    UPROPERTY(EditAnywhere)
    float WanderAimTraceDistance;
    
    UPROPERTY(EditAnywhere)
    float WanderAimReflectionExp;
    
public:
    USDICoreUtilityAIStateWander();
};

