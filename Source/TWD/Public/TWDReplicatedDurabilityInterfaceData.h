#pragma once
#include "CoreMinimal.h"
#include "TWDReplicatedDurabilityInterfaceData.generated.h"

USTRUCT(BlueprintType)
struct FTWDReplicatedDurabilityInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepDurability;
    
    TWD_API FTWDReplicatedDurabilityInterfaceData();
};

