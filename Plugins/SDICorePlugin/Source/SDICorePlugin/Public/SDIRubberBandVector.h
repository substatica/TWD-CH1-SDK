#pragma once
#include "CoreMinimal.h"
#include "SDIRubberBandSettings.h"
#include "SDIRubberBandVector.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIRubberBandVector : public FSDIRubberBandSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocity;
    
public:
    FSDIRubberBandVector();
};

