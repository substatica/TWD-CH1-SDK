#pragma once
#include "CoreMinimal.h"
#include "ETWDAICommand.generated.h"

UENUM(BlueprintType)
enum class ETWDAICommand : uint8 {
    None,
    Stop,
    MoveTo,
    Attack,
    Interact,
    SelfDestruct,
};

