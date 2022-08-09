#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAIAimSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIAimSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SpringK;
    
    UPROPERTY(EditAnywhere)
    float SpringDamp;
    
    UPROPERTY(EditAnywhere)
    float SpringMaxVel;
    
    UPROPERTY(EditAnywhere)
    bool bAllowOvershoot;
    
    FSDICoreUtilityAIAimSettings();
};

