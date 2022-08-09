#pragma once
#include "CoreMinimal.h"
#include "SDITuningModifier.h"
#include "SDITuningAccumulator.generated.h"

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningAccumulator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDITuningModifier> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTuning;
    
public:
    FSDITuningAccumulator();
};

