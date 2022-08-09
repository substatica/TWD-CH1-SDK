#pragma once
#include "CoreMinimal.h"
#include "EInitialSimulatePhysics.generated.h"

UENUM(BlueprintType)
enum class EInitialSimulatePhysics : uint8 {
    Default,
    ForceOn,
    ForceOff,
};

