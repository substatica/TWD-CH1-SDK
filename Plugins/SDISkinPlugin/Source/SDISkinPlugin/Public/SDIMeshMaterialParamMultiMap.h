#pragma once
#include "CoreMinimal.h"
#include "SDIMeshMaterialParamMap.h"
#include "SDIMeshMaterialParamMultiMap.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParamMultiMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UMeshComponent*, FSDIMeshMaterialParamMap> CompParamMap;
    
    UPROPERTY(Transient)
    bool bCompParamMapDirty;
    
    FSDIMeshMaterialParamMultiMap();
};

