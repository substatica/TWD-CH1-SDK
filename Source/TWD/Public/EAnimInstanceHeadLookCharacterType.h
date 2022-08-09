#pragma once
#include "CoreMinimal.h"
#include "EAnimInstanceHeadLookCharacterType.generated.h"

UENUM(BlueprintType)
enum class EAnimInstanceHeadLookCharacterType : uint8 {
    EHeadLookCharType_Walker,
    EHeadLookCharType_HangingMan,
    EHeadLookCharType_HumanMale,
    EHeadLookCharType_MAX UMETA(Hidden),
};

