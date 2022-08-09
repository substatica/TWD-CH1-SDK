#pragma once
#include "CoreMinimal.h"
#include "SDIRandomSkinScalarParam.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRandomSkinScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Param;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> Values;
    
    FSDIRandomSkinScalarParam();
};

