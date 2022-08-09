#pragma once
#include "CoreMinimal.h"
#include "ETWDAICommand.generated.h"

UENUM()
enum class ETWDAICommand : uint8 {
    None,
    Stop,
    MoveTo,
    Attack,
    Interact,
    SelfDestruct,
};

