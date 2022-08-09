#pragma once
#include "CoreMinimal.h"
#include "ECustomThrowPhysicsMode.generated.h"

UENUM()
enum class ECustomThrowPhysicsMode : uint8 {
    OrientToVelocity,
    SpinOnAxis,
};

