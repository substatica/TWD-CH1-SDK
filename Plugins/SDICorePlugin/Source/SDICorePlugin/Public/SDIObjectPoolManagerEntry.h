#pragma once
#include "CoreMinimal.h"
#include "SDIObjectPoolManagerEntry.generated.h"

class ASDIObjectPool;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIObjectPoolManagerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASDIObjectPool> PoolClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    FSDIObjectPoolManagerEntry();
};

