#pragma once
#include "CoreMinimal.h"
#include "EFactionReaction.h"
#include "CostPerFactionReaction.generated.h"

USTRUCT(BlueprintType)
struct FCostPerFactionReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFactionReaction, float> Costs;
    
    TWD_API FCostPerFactionReaction();
};

