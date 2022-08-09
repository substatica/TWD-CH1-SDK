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
    UPROPERTY(Transient)
    FVector Integral;
    
    UPROPERTY(Transient)
    FVector PreviousError;
    
public:
    FSDIVectorPIDController();
};

