#pragma once
#include "CoreMinimal.h"
#include "SDIForceFeedbackSettings.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIForceFeedbackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    FSDIForceFeedbackSettings();
};

