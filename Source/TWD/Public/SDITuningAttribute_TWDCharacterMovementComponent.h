#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDICharacterAdvancedMovementComponent.h"
#include "SDITuningAttribute_TWDCharacterMovementComponent.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDCharacterMovementComponent : public FSDITuningAttribute_SDICharacterAdvancedMovementComponent {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDCharacterMovementComponent();
};

