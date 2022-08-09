#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ProportionalGain;
    
    UPROPERTY(EditAnywhere)
    float IntegralGain;
    
    UPROPERTY(EditAnywhere)
    float DerivativeGain;
    
public:
    FSDIPIDControllerSettings();
};

