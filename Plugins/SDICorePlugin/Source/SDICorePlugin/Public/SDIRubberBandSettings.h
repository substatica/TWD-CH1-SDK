#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "RFloat.h"
#include "SDIRubberBandSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIRubberBandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloat Extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelaxedSpringDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp SpringStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp SpringDampening;
    
    FSDIRubberBandSettings();
};

