#pragma once
#include "CoreMinimal.h"
#include "SDIReferenceCounter.h"
#include "SDISoftObjectPathReference.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISoftObjectPathReference : public FSDIReferenceCounter {
    GENERATED_BODY()
public:
    FSDISoftObjectPathReference();
};

