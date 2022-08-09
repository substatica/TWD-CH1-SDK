#pragma once
#include "CoreMinimal.h"
#include "EndGameReason.generated.h"

UENUM()
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

