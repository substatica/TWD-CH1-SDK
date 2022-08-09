#pragma once
#include "CoreMinimal.h"
#include "SDIMeshMaterialParamMap.h"
#include "SDIMeshMaterialParamMultiMap.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParamMultiMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FSDIMeshMaterialParamMap> CompParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompParamMapDirty;
    
    FSDIMeshMaterialParamMultiMap();
};

