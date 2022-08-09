#pragma once
#include "CoreMinimal.h"
#include "RRotator.h"
#include "RRotatorExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRRotatorExp : public FRRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FRRotatorExp();
};

