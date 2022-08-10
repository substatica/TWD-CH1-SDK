#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SpawnVFXAttachedParams.generated.h"

class UFXSystemAsset;
class USceneComponent;

USTRUCT(BlueprintType)
struct FSpawnVFXAttachedParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFXSystemAsset* EmitterTemplate;
    
    UPROPERTY(Export)
    USceneComponent* AttachToComponent;
    
    UPROPERTY()
    FName AttachPointName;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    TEnumAsByte<EAttachLocation::Type> LocationType;
    
    UPROPERTY()
    bool bAutoDestroy;
    
    UPROPERTY()
    EPSCPoolMethod PoolingMethod;
    
    UPROPERTY()
    bool bAutoActivateSystem;
    
    ENGINE_API FSpawnVFXAttachedParams();
};

