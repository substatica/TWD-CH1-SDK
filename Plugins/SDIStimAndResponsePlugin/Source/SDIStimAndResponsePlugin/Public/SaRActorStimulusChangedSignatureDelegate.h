#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SaRActorStimulusChangedSignatureDelegate.generated.h"

class ASDIStimAndResponseActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSaRActorStimulusChangedSignature, ASDIStimAndResponseActor*, Actor, const FGameplayTagContainer&, OldStimuli, const FGameplayTagContainer&, NewStimuli, const FGameplayTagContainer&, AddedStimuli, const FGameplayTagContainer&, RemovedStimuli);

