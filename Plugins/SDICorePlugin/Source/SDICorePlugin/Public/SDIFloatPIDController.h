#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "SDIFloatPIDController.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIFloatPIDController : public FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Integral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousError;
    
public:
    FSDIFloatPIDController();
};

