#pragma once
#include "CoreMinimal.h"
#include "RFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FRFloat();
};

