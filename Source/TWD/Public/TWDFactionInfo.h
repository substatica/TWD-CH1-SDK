#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EFactionReaction.h"
#include "TWDFactionInfo.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDFactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaction, EFactionReaction> FactionReactions;
    
    FTWDFactionInfo();
};

