#pragma once
#include "CoreMinimal.h"
#include "SDIRubberBandSettings.h"
#include "SDIDoubleRubberBandFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDoubleRubberBandFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings Retract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings Pull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocity;
    
    FSDIDoubleRubberBandFloat();
};

