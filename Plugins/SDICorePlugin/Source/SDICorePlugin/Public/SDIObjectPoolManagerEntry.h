#pragma once
#include "CoreMinimal.h"
#include "SDIObjectPoolManagerEntry.generated.h"

class ASDIObjectPool;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIObjectPoolManagerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleAnywhere)
    TSoftClassPtr<ASDIObjectPool> PoolClass;
    
    UPROPERTY(Config, VisibleAnywhere)
    TSoftClassPtr<UObject> ObjectClass;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 PoolSize;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 MaxSize;
    
    FSDIObjectPoolManagerEntry();
};

