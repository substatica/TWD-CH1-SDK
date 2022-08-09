#pragma once
#include "CoreMinimal.h"
#include "EFactionReaction.h"
#include "EFaction.h"
#include "TWDFactionInfo.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDFactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EFaction, EFactionReaction> FactionReactions;
    
    FTWDFactionInfo();
};

