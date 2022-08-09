#pragma once
#include "CoreMinimal.h"
#include "EndGameReason.generated.h"

UENUM(BlueprintType)
namespace EndGameReason {
    enum Type {
        None,
        Unknown,
        TimeLimit,
        Empty,
        PartialConnect,
        NoConnect,
        CheatEndGame,
    };
}

