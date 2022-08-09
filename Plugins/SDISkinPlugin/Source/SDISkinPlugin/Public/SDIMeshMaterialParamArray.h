#pragma once
#include "CoreMinimal.h"
#include "SDIMeshMaterialParam.h"
#include "SDIMeshMaterialParamArray.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString DebugOwnerName;
    
    UPROPERTY(Transient)
    TArray<FSDIMeshMaterialParam> ParamArr;
    
    FSDIMeshMaterialParamArray();
};

