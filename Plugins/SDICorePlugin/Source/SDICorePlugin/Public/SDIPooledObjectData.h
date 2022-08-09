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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIObjectPool* Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsidePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AcquiredTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ReturnToPoolTimerHandle;
    
public:
    FSDIPooledObjectData();
};

