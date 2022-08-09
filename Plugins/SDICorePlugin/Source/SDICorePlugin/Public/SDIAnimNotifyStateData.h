#pragma once
#include "CoreMinimal.h"
#include "SDIAnimNotifyStateData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAnimNotifyStateData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UAnimSequenceBase> WeakAnimation;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    float Timestamp;
    
public:
    FSDIAnimNotifyStateData();
};

