#pragma once
#include "CoreMinimal.h"
#include "SDIHapticFeedbackManagerEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIHapticFeedbackManagerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> EffectOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    FSDIHapticFeedbackManagerEntry();
};

