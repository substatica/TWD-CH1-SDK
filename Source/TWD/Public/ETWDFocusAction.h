#pragma once
#include "CoreMinimal.h"
#include "ETWDFocusAction.generated.h"

UENUM(BlueprintType)
enum class ETWDFocusAction : uint8 {
    None,
    Set,
    Clear,
    Restore,
};

