#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDIVectorPIDController.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIVectorPIDController : public FSDIPIDControllerSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Integral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousError;
    
public:
    FSDIVectorPIDController();
};

