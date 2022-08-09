#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDICoreCharacter.h"
#include "SDITuningAttribute_SDICharacter.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDICharacter : public FSDITuningAttribute_SDICoreCharacter {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDICharacter();
};

