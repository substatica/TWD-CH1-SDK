#pragma once
#include "CoreMinimal.h"
#include "SDIMeshMaterialParam.h"
#include "SDIMeshMaterialParamArray.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugOwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIMeshMaterialParam> ParamArr;
    
    FSDIMeshMaterialParamArray();
};

