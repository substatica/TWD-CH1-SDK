#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDIQuatPIDController.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIQuatPIDController : public FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat Integral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat PreviousError;
    
public:
    FSDIQuatPIDController();
};

