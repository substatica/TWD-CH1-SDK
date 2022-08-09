#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "SDIBlendOption.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIBlendOption {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exponent;
    
public:
    FSDIBlendOption();
};

