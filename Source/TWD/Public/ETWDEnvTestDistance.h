#pragma once
#include "CoreMinimal.h"
#include "ETWDEnvTestDistance.generated.h"

UENUM(BlueprintType)
namespace ETWDEnvTestDistance {
    enum Type {
        Distance3D,
        Distance2D,
        DistanceZ,
        DistanceAbsoluteZ,
    };
}

