#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SaRProjectileActorStimulusChangedSignatureDelegate.generated.h"

class ASDIStimAndResponseProjectileActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSaRProjectileActorStimulusChangedSignature, ASDIStimAndResponseProjectileActor*, Actor, const FGameplayTagContainer&, OldStimuli, const FGameplayTagContainer&, NewStimuli, const FGameplayTagContainer&, AddedStimuli, const FGameplayTagContainer&, RemovedStimuli);

