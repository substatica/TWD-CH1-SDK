#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDICharacter.h"
#include "SDITuningAttribute_SDICharacterAdvanced.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDICharacterAdvanced : public FSDITuningAttribute_SDICharacter {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDICharacterAdvanced();
};

