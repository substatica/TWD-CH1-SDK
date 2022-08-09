#pragma once
#include "CoreMinimal.h"
#include "SDIWorldSettings.h"
#include "Particles/WorldPSCPool.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpawnVFXAttachedParams -FallbackName=SpawnVFXAttachedParams
#include "UObject/NoExportTypes.h"
#include "TWDWorldSettings.generated.h"

class UObject;
class UFXSystemAsset;

UCLASS(Blueprintable)
class TWD_API ATWDWorldSettings : public ASDIWorldSettings {
    GENERATED_BODY()
public:
    ATWDWorldSettings();
    UFUNCTION(BlueprintCallable)
    void SpawnVFXAttached(FSpawnVFXAttachedParams Params);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVFXAtLocation(const UObject* WorldContextObject, UFXSystemAsset* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
    
};

