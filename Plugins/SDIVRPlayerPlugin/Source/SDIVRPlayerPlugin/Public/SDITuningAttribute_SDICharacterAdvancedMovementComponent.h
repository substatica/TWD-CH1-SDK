#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDICoreCharacterMovementComponent.h"
#include "SDITuningAttribute_SDICharacterAdvancedMovementComponent.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDICharacterAdvancedMovementComponent : public FSDITuningAttribute_SDICoreCharacterMovementComponent {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDICharacterAdvancedMovementComponent();
};

