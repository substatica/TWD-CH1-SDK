#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRInteraction.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVRInteraction : uint8 {
    NVRI_Default,
    NVRI_Use,
    NVRI_Interact,
    NVRI_Store,
    NVRI_Cancel,
    NVRI_Equip,
    NVRI_Drop,
    NVRI_Scrap,
    NVRI_Navigate,
    NVRI_MAX UMETA(Hidden),
};

