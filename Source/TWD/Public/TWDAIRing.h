#pragma once
#include "CoreMinimal.h"
#include "TWDAISlot.h"
#include "TWDAIRing.generated.h"

USTRUCT(BlueprintType)
struct FTWDAIRing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDAISlot> FreeSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDAISlot> ReservedSlots;
    
    TWD_API FTWDAIRing();
};

