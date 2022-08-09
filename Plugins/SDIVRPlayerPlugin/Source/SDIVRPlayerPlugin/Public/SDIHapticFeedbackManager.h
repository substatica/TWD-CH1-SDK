#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ESDIMathOperation.h"
#include "SDIHapticFeedbackManagerEntry.h"
#include "SDIHapticFeedbackManager.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIHapticFeedbackManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    EControllerHand HandEnum;
    
    UPROPERTY(EditAnywhere)
    ESDIMathOperation AmplitudeBlendOp;
    
    UPROPERTY(EditAnywhere)
    ESDIMathOperation FrequencyBlendOp;
    
    UPROPERTY(Transient)
    TArray<FSDIHapticFeedbackManagerEntry> HapticEffects;
    
    UPROPERTY(Transient)
    bool bCustomHapticFeedbackActive;
    
    UPROPERTY(Transient)
    bool bActiveEffectsLastTick;
    
public:
    FSDIHapticFeedbackManager();
};

