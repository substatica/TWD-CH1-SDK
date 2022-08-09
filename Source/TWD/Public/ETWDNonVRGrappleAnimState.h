#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRGrappleAnimState.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVRGrappleAnimState : uint8 {
    None,
    Start,
    CrawlStart,
    Loop,
    Fail,
    Success,
    Death,
};

