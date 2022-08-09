#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "SDIFloatPIDController.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIFloatPIDController : public FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    float Integral;
    
    UPROPERTY(Transient)
    float PreviousError;
    
public:
    FSDIFloatPIDController();
};

