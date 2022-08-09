#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProportionalGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntegralGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DerivativeGain;
    
public:
    FSDIPIDControllerSettings();
};

