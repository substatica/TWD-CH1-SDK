#pragma once
#include "CoreMinimal.h"
#include "SDIReferenceCounter.h"
#include "SDISoftObjectPathReference.generated.h"

USTRUCT()
struct SDICOREPLUGIN_API FSDISoftObjectPathReference : public FSDIReferenceCounter {
    GENERATED_BODY()
public:
    FSDISoftObjectPathReference();
};

