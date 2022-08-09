#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "SDICoreDOTComponent.h"
#include "GameplayTagContainer.h"
#include "SDIDynamicGameplayTagAssetInterface.h"
#include "SDIStimAndResponseApplicationInterface.h"
#include "SDIStimAndResponseReactionInterface.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseDOTComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDISTIMANDRESPONSEPLUGIN_API USDIStimAndResponseDOTComponent : public USDICoreDOTComponent, public IGameplayTagAssetInterface, public ISDIDynamicGameplayTagAssetInterface, public ISDIStimAndResponseApplicationInterface, public ISDIStimAndResponseReactionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTagContainer;
    
public:
    USDIStimAndResponseDOTComponent();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGameplayTag(FGameplayTag Tag, bool bUpdateStimuli) override PURE_VIRTUAL(RemoveGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ClearGameplayTags(bool bUpdateStimuli) override PURE_VIRTUAL(ClearGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void AppendGameplayTags(const FGameplayTagContainer& Other, bool bUpdateStimuli) override PURE_VIRTUAL(AppendGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    bool AddGameplayTag(FGameplayTag Tag, bool bLeaf, bool bUpdateStimuli) override PURE_VIRTUAL(AddGameplayTag, return false;);
    
};

