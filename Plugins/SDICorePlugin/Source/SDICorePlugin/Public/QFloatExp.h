#pragma once
#include "CoreMinimal.h"
#include "QFloat.h"
#include "QFloatExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQFloatExp : public FQFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FQFloatExp();
};

