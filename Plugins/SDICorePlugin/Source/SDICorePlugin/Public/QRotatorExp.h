#pragma once
#include "CoreMinimal.h"
#include "QRotator.h"
#include "QRotatorExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQRotatorExp : public FQRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FQRotatorExp();
};

