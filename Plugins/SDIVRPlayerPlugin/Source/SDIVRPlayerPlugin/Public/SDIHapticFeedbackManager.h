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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerHand HandEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIMathOperation AmplitudeBlendOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIMathOperation FrequencyBlendOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIHapticFeedbackManagerEntry> HapticEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomHapticFeedbackActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActiveEffectsLastTick;
    
public:
    FSDIHapticFeedbackManager();
};

