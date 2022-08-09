#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "TWDDurabilityInterfaceData.generated.h"

USTRUCT(BlueprintType)
struct FTWDDurabilityInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDurability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRFloatExp InitialDurability;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LocalDurability;
    
    TWD_API FTWDDurabilityInterfaceData();
};

