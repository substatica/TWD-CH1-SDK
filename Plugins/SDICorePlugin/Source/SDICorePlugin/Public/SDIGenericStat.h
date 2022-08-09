#pragma once
#include "CoreMinimal.h"
#include "SDIGenericStat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIGenericStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
public:
    FSDIGenericStat();
};

