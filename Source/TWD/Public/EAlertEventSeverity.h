#pragma once
#include "CoreMinimal.h"
#include "EAlertEventSeverity.generated.h"

UENUM()
enum class EAlertEventSeverity : uint8 {
    AlertEventSeverity0,
    PersonalPlusCumulativeFaction,
    AlertEventSeverity1,
    Faction,
    MAX,
};

