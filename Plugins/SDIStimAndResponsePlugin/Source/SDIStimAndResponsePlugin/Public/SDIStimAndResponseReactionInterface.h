#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseReactionInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class SDISTIMANDRESPONSEPLUGIN_API USDIStimAndResponseReactionInterface : public UInterface {
    GENERATED_BODY()
};

class SDISTIMANDRESPONSEPLUGIN_API ISDIStimAndResponseReactionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StimulusChanged(UObject* StimuliOwner, const FGameplayTagContainer& OldStimuli, const FGameplayTagContainer& NewStimuli, const FGameplayTagContainer& AddedStimuli, const FGameplayTagContainer& RemovedStimuli);
    
};

