#pragma once
#include "CoreMinimal.h"
#include "SDIRubberBandSettings.h"
#include "SDIRubberBandFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIRubberBandFloat : public FSDIRubberBandSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocity;
    
public:
    FSDIRubberBandFloat();
};

