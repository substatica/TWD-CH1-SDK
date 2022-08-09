#pragma once
#include "CoreMinimal.h"
#include "SDIMeshMaterialParamArray.h"
#include "SDIMeshMaterialParam.h"
#include "SDIMeshMaterialParamMap.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParamMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UObject*, FSDIMeshMaterialParamArray> ParamMap;
    
    UPROPERTY(Transient)
    TArray<FSDIMeshMaterialParamArray> OriginalParams;
    
    UPROPERTY(Transient)
    TArray<FSDIMeshMaterialParam> ChangedValues;
    
    UPROPERTY(Transient)
    bool bFullReset;
    
    FSDIMeshMaterialParamMap();
};

