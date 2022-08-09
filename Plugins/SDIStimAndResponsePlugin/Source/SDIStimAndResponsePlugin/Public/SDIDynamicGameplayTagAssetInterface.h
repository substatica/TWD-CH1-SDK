#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SDIDynamicGameplayTagAssetInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDISTIMANDRESPONSEPLUGIN_API USDIDynamicGameplayTagAssetInterface : public UInterface {
    GENERATED_BODY()
};

class SDISTIMANDRESPONSEPLUGIN_API ISDIDynamicGameplayTagAssetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveGameplayTag(FGameplayTag Tag, bool bUpdateStimuli) PURE_VIRTUAL(RemoveGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ClearGameplayTags(bool bUpdateStimuli) PURE_VIRTUAL(ClearGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AppendGameplayTags(const FGameplayTagContainer& Other, bool bUpdateStimuli) PURE_VIRTUAL(AppendGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AddGameplayTag(FGameplayTag Tag, bool bLeaf, bool bUpdateStimuli) PURE_VIRTUAL(AddGameplayTag, return false;);
    
};

