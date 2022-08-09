#pragma once
#include "CoreMinimal.h"
#include "TWDWaypointEventHistoryActorSet.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDWaypointEventHistoryActorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ActorNames;
    
    FTWDWaypointEventHistoryActorSet();
};

