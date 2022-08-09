#pragma once
#include "CoreMinimal.h"
#include "EPlayerAggravationEvent.generated.h"

UENUM(BlueprintType)
enum class EPlayerAggravationEvent : uint8 {
    None,
    PersonalSpace,
    NearMiss,
    Wounded,
    ShotInHead,
    Count,
};

