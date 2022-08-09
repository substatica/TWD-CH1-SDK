#pragma once
#include "CoreMinimal.h"
#include "ETWDGunAction.generated.h"

UENUM(BlueprintType)
enum class ETWDGunAction : uint8 {
    Any,
    Cancel,
    Reload,
    Chamber,
    Unjam,
};

