#pragma once
#include "CoreMinimal.h"
#include "EPlayerAggravationEvent.generated.h"

UENUM()
enum class EPlayerAggravationEvent : uint8 {
    None,
    PersonalSpace,
    NearMiss,
    Wounded,
    ShotInHead,
    Count,
};

