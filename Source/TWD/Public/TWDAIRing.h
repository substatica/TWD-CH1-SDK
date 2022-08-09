#pragma once
#include "CoreMinimal.h"
#include "TWDAISlot.h"
#include "TWDAIRing.generated.h"

USTRUCT(BlueprintType)
struct FTWDAIRing {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Radius;
    
    UPROPERTY(Transient)
    TArray<FTWDAISlot> FreeSlots;
    
    UPROPERTY(Transient)
    TArray<FTWDAISlot> ReservedSlots;
    
    TWD_API FTWDAIRing();
};

