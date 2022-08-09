#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "RFloatExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRFloatExp : public FRFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FRFloatExp();
};

