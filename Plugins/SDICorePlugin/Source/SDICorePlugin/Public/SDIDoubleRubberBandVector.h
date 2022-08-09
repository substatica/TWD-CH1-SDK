#pragma once
#include "CoreMinimal.h"
#include "SDIRubberBandSettings.h"
#include "SDIDoubleRubberBandVector.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDoubleRubberBandVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings Retract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIRubberBandSettings Pull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocity;
    
    FSDIDoubleRubberBandVector();
};

