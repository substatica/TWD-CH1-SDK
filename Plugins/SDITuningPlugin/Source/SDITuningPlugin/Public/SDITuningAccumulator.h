#pragma once
#include "CoreMinimal.h"
#include "SDITuningModifier.h"
#include "SDITuningAccumulator.generated.h"

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningAccumulator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSDITuningModifier> Modifiers;
    
    UPROPERTY(Transient)
    bool bIsTuning;
    
public:
    FSDITuningAccumulator();
};

