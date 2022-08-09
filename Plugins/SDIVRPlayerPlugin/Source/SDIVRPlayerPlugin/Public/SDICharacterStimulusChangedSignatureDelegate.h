#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SDICharacterStimulusChangedSignatureDelegate.generated.h"

class ASDICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSDICharacterStimulusChangedSignature, ASDICharacter*, Character, const FGameplayTagContainer&, OldStimuli, const FGameplayTagContainer&, NewStimuli, const FGameplayTagContainer&, AddedStimuli, const FGameplayTagContainer&, RemovedStimuli);

