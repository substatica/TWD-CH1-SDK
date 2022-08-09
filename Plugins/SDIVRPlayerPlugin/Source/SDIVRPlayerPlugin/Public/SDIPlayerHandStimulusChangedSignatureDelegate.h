#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SDIPlayerHandStimulusChangedSignatureDelegate.generated.h"

class ASDIPlayerHand;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSDIPlayerHandStimulusChangedSignature, ASDIPlayerHand*, hand, const FGameplayTagContainer&, OldStimuli, const FGameplayTagContainer&, NewStimuli, const FGameplayTagContainer&, AddedStimuli, const FGameplayTagContainer&, RemovedStimuli);

