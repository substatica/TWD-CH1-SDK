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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FSDIMeshMaterialParamArray> ParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIMeshMaterialParamArray> OriginalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIMeshMaterialParam> ChangedValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFullReset;
    
    FSDIMeshMaterialParamMap();
};

