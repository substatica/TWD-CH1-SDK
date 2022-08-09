#pragma once
#include "CoreMinimal.h"
#include "SDIReferenceCounter.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReferenceCounter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 RefCount;
    
public:
    FSDIReferenceCounter();
};

