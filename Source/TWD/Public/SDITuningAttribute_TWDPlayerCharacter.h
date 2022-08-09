#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_TWDCharacter.h"
#include "SDITuningAttribute_TWDPlayerCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDPlayerCharacter : public FSDITuningAttribute_TWDCharacter {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDPlayerCharacter();
};

