#pragma once
#include "CoreMinimal.h"
#include "SDIRandomSkinScalarParam.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRandomSkinScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    FSDIRandomSkinScalarParam();
};

