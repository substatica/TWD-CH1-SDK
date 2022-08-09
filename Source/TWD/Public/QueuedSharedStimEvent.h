#pragma once
#include "CoreMinimal.h"
#include "ActorStimData.h"
#include "QueuedSharedStimEvent.generated.h"

class ATWDAIController;

USTRUCT(BlueprintType)
struct FQueuedSharedStimEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATWDAIController> AIControllerSharer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorStimData Stim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExisting;
    
    TWD_API FQueuedSharedStimEvent();
};

