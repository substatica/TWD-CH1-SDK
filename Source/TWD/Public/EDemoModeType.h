#pragma once
#include "CoreMinimal.h"
#include "EDemoModeType.generated.h"

UENUM()
enum class EDemoModeType : uint8 {
    DemoMode_None,
    DemoMode_Regular,
    DemoMode_Convention,
    DemoMode_PrivatePressEvent,
    DemoMode_OC,
    DemoMode_ROTR,
    DemoMode_AimAssist2104,
    DemoMode_MAX UMETA(Hidden),
};

