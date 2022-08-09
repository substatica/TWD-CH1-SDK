#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDIPooledObjectData.generated.h"

class ASDIObjectPool;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPooledObjectData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASDIObjectPool* Pool;
    
    UPROPERTY(Transient)
    bool bInsidePool;
    
    UPROPERTY(Transient)
    float AcquiredTimestamp;
    
    UPROPERTY(Transient)
    FTimerHandle ReturnToPoolTimerHandle;
    
public:
    FSDIPooledObjectData();
};

