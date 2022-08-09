#pragma once
#include "CoreMinimal.h"
#include "SDIObjectReference.h"
#include "SDIObjectReferences.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIObjectReferences {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FSDIObjectReference> References;
    
public:
    FSDIObjectReferences();
};

