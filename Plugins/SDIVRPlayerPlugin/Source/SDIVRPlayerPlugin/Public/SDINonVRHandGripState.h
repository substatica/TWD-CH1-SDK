#pragma once
#include "CoreMinimal.h"
#include "SDINonVRHandGripState.generated.h"

USTRUCT()
struct SDIVRPLAYERPLUGIN_API FSDINonVRHandGripState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    int32 OverridePriority;
    
    UPROPERTY(Transient)
    bool bOverrideLeftHand;
    
    UPROPERTY(Transient)
    bool bOverrideRightHand;
    
public:
    FSDINonVRHandGripState();
};

