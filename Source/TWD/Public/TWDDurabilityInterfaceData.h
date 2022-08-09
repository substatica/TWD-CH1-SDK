#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "TWDDurabilityInterfaceData.generated.h"

USTRUCT(BlueprintType)
struct FTWDDurabilityInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp InitialDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalDurability;
    
    TWD_API FTWDDurabilityInterfaceData();
};

