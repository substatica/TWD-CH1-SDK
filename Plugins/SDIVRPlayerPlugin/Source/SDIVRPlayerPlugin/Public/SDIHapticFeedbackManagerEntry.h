#pragma once
#include "CoreMinimal.h"
#include "SDIHapticFeedbackManagerEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIHapticFeedbackManagerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    int32 Priority;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> EffectOwner;
    
    UPROPERTY(Transient)
    bool bPaused;
    
    FSDIHapticFeedbackManagerEntry();
};

