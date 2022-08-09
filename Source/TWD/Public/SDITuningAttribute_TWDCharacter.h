#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDICharacterAdvanced.h"
#include "SDITuningAttribute_TWDCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDCharacter : public FSDITuningAttribute_SDICharacterAdvanced {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDCharacter();
};

