#pragma once
#include "CoreMinimal.h"
#include "ESDIMeshMaterialParamType.generated.h"

UENUM(BlueprintType)
enum class ESDIMeshMaterialParamType : uint8 {
    None,
    Scalar,
    Vector,
    Texture,
    Material,
};

