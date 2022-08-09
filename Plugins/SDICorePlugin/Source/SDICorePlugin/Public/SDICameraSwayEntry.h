#pragma once
#include "CoreMinimal.h"
#include "FloatRandomOscillator.h"
#include "SDICameraSwayEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraSwayEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    FFloatRandomOscillator Pitch;
    
    UPROPERTY(Transient)
    FFloatRandomOscillator Yaw;
    
    UPROPERTY(Transient)
    FFloatRandomOscillator Roll;
    
public:
    FSDICameraSwayEntry();
};

