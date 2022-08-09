#pragma once
#include "CoreMinimal.h"
#include "ESDIMathOperation.generated.h"

UENUM()
enum class ESDIMathOperation : uint8 {
    Max,
    Min,
    Average,
    Multiply,
    Add,
    Subtract,
    SubtractSwapped,
    Divide,
    DivideSwapped,
    Power,
    PowerSwapped,
    Random,
    RandomRange,
    UseFirst,
    UseSecond,
    One,
    Zero,
};

