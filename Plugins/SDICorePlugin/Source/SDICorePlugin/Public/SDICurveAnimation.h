#pragma once
#include "CoreMinimal.h"
#include "SDIExternalCurveAnimation.h"
#include "Curves/CurveFloat.h"
#include "SDICurveAnimation.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICurveAnimation : public FSDIExternalCurveAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    FSDICurveAnimation();
};

