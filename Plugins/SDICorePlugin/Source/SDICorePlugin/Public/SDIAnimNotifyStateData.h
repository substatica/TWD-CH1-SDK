#pragma once
#include "CoreMinimal.h"
#include "SDIAnimNotifyStateData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAnimNotifyStateData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAnimSequenceBase> WeakAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
public:
    FSDIAnimNotifyStateData();
};

