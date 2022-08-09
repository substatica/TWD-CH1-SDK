#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_CharacterMovementComponent.h"
#include "SDITuningAttribute_SDICoreCharacterMovementComponent.generated.h"

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningAttribute_SDICoreCharacterMovementComponent : public FSDITuningAttribute_CharacterMovementComponent {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDICoreCharacterMovementComponent();
};

