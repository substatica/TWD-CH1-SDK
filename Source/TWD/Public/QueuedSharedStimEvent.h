#pragma once
#include "CoreMinimal.h"
#include "ActorStimData.h"
#include "QueuedSharedStimEvent.generated.h"

class ATWDAIController;

USTRUCT(BlueprintType)
struct FQueuedSharedStimEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TWeakObjectPtr<ATWDAIController> AIControllerSharer;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FActorStimData Stim;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bExisting;
    
    TWD_API FQueuedSharedStimEvent();
};

