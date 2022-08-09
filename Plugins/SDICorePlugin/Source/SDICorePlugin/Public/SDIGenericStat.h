#pragma once
#include "CoreMinimal.h"
#include "SDIGenericStat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIGenericStat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Time;
    
public:
    FSDIGenericStat();
};

