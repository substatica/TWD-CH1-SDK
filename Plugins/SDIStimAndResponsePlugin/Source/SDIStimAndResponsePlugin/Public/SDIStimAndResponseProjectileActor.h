#pragma once
#include "CoreMinimal.h"
#include "SaRProjectileActorStimulusChangedSignatureDelegate.h"
#include "GameplayTagAssetInterface.h"
#include "SDICoreProjectileActor.h"
#include "SDIStimAndResponseInterface.h"
#include "SDIReplicatedStimAndResponseInterfaceDataContainer.h"
#include "GameplayTagContainer.h"
#include "SDIDynamicGameplayTagAssetInterface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseInterfaceDataContainer.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseProjectileActor.generated.h"

class AActor;
class UDamageType;
class AController;
class UPrimitiveComponent;

UCLASS()
class SDISTIMANDRESPONSEPLUGIN_API ASDIStimAndResponseProjectileActor : public ASDICoreProjectileActor, public ISDIStimAndResponseInterface, public IGameplayTagAssetInterface, public ISDIDynamicGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTagContainer;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_RepStimulusData)
    FSDIReplicatedStimAndResponseInterfaceDataContainer RepStimulusData;
    
    UPROPERTY(EditAnywhere)
    FSDIStimAndResponseInterfaceDataContainer StimulusData;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSaRProjectileActorStimulusChangedSignature OnStimulusChangedDelegate;
    
    ASDIStimAndResponseProjectileActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void StimulusTick(const FGameplayTagContainer& Stimuli, float DeltaTime);
    
    UFUNCTION()
    void OnRep_RepStimulusData();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopStimulusTick() override PURE_VIRTUAL(StopStimulusTick,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartStimulusTick() override PURE_VIRTUAL(StartStimulusTick,);
    
private:
    UFUNCTION()
    void SaR_UpdateStimuli() override PURE_VIRTUAL(SaR_UpdateStimuli,);
    
    UFUNCTION()
    void SaR_OnTick() override PURE_VIRTUAL(SaR_OnTick,);
    
    UFUNCTION()
    void SaR_OnTakeAnyDamage(AActor* DamagedActor, float NewDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) override PURE_VIRTUAL(SaR_OnTakeAnyDamage,);
    
    UFUNCTION()
    void SaR_OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override PURE_VIRTUAL(SaR_OnComponentHit,);
    
    UFUNCTION()
    void SaR_OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override PURE_VIRTUAL(SaR_OnComponentEndOverlap,);
    
    UFUNCTION()
    void SaR_OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override PURE_VIRTUAL(SaR_OnComponentBeginOverlap,);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterMultipleComponentCallbacks(TArray<UPrimitiveComponent*> Comps, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterMultipleComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterComponentCallbacks(UPrimitiveComponent* Comp, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAllComponentCallbacks(bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterAllComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAllCallbacks(bool bDamage, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterAllCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterActorCallbacks(bool bDamage) override PURE_VIRTUAL(RegisterActorCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void K2UpdateStimuli(const FGameplayTagContainer& IncomingStimuli, bool bNonLatent) override PURE_VIRTUAL(K2UpdateStimuli,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsComponentOverlapRegistered(UPrimitiveComponent* Comp) const override PURE_VIRTUAL(IsComponentOverlapRegistered, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumOverlappingStimuli(const FGameplayTagQuery& Query) const override PURE_VIRTUAL(GetNumOverlappingStimuli, return 0;);
    
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

