#pragma once
#include "CoreMinimal.h"
#include "ActorStimData.h"
#include "OnReceivedSharedStimDelegate.generated.h"

class ATWDAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnReceivedSharedStim, ATWDAIController*, AIControllerSharee, ATWDAIController*, AIControllerSharer, FActorStimData, StimData, bool, bExisting);

