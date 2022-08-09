#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInventoryHolderInterface.h"
#include "SDISkinnedCharacter.h"
#include "SDIHeldActorHolderInterface.h"
#include "SDIExportInterface.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandPawnInterface.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "SDIDynamicGameplayTagAssetInterface.h"
#include "SDIInventoryHolderInterfaceInventoryList.h"
#include "SDIStimAndResponseInterface.h"
#include "SDIExportData.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "SDIReplicatedStimAndResponseInterfaceDataContainer.h"
#include "SDIStimAndResponseInterfaceDataContainer.h"
#include "SDICharacterStimulusChangedSignatureDelegate.h"
#include "ESignificanceState.h"
#include "SDISpaceTimestampTransform_NetQuantize.h"
#include "SDIReplicatedGripInfo.h"
#include "ESDITransformSpace.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "InputCoreTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "SDICharacter.generated.h"

class ASDIInteractiveHighlightManager;
class ASDIPlayerHand;
class ASDIInventoryActor;
class ASDIHeldActor;
class UDamageType;
class AActor;
class UCameraComponent;
class USceneComponent;
class AController;
class UPrimitiveComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDICharacter : public ASDISkinnedCharacter, public ISDIHeldActorHolderInterface, public ISDIInventoryHolderInterface, public ISDIPlayerHandPawnInterface, public IGameplayTagAssetInterface, public ISDIDynamicGameplayTagAssetInterface, public ISDIStimAndResponseInterface, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDIExportData ExportData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIInteractiveHighlightManager> InteractiveHighlightManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIPlayerHand> PlayerHandBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIPlayerHand> PlayerLeftHandBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    float ServerHMDHandReplicationFrequency;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName LeftHandAttachSocket;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName RightHandAttachSocket;
    
    UPROPERTY(EditAnywhere)
    FSDIInventoryHolderInterfaceInventoryList InitialInventory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HandActivityLevelFadeDownSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HandActivityLevelFadeUpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTagContainer;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_RepStimulusData)
    FSDIReplicatedStimAndResponseInterfaceDataContainer RepStimulusData;
    
    UPROPERTY(EditAnywhere)
    FSDIStimAndResponseInterfaceDataContainer StimulusData;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDICharacterStimulusChangedSignature OnStimulusChangedDelegate;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepInventoryList)
    TArray<ASDIInventoryActor*> RepInventoryList;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepLeftHandHeldActor)
    ASDIHeldActor* RepLeftHandHeldActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepRightHandHeldActor)
    ASDIHeldActor* RepRightHandHeldActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepHMDTransform)
    FSDISpaceTimestampTransform_NetQuantize RepHMDTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepLeftHandTransform)
    FSDISpaceTimestampTransform_NetQuantize RepLeftHandTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepRightHandTransform)
    FSDISpaceTimestampTransform_NetQuantize RepRightHandTransform;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float RepLeftHandTargetActivityLevel;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float RepLeftHandTargetActivityLevelFadeScale;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float RepRightHandTargetActivityLevel;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float RepRightHandTargetActivityLevelFadeScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftHandActivityLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RightHandActivityLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpHMDTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpLeftHandTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpRightHandTransform;
    
    UPROPERTY(Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpHMDTransformStart;
    
    UPROPERTY(Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpLeftHandTransformStart;
    
    UPROPERTY(Transient)
    FSDISpaceTimestampTransform_NetQuantize LerpRightHandTransformStart;
    
    UPROPERTY(Replicated, Transient)
    float RepLastServerHMDHandReplicationTimestamp;
    
public:
    ASDICharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopNonVRObjectInteraction();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void StimulusTick(const FGameplayTagContainer& Stimuli, float DeltaTime);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerSetTransforms(const FSDISpaceTimestampTransform_NetQuantize& HMD, const FSDISpaceTimestampTransform_NetQuantize& LeftHand, const FSDISpaceTimestampTransform_NetQuantize& RightHand, float LHTargetActivityLevel, float LHTargetActivityLevelFadeScale, float RHTargetActivityLevel, float RHTargetActivityLevelFadeScale);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetHeldBy_IFC(ASDIHeldActor* HeldActor, const FSDIReplicatedGripInfo& PrimaryGrip, const FSDIReplicatedGripInfo& SecondaryGrip);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGiveTo_IFC(ASDIInventoryActor* Inventory, AActor* NewOwner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerClearHeldBy_IFC(ASDIHeldActor* HeldActor, const FTransform& Transform, const FVector& ThrowVelocity, const FVector& AngularVelocityDeg, const FSDIAttachmentInfo& AttachInfo, bool bCustomThrowPhysicsEngaged);
    
protected:
    UFUNCTION()
    void OnRep_RepStimulusData();
    
    UFUNCTION()
    void OnRep_RepRightHandTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepRightHandTransform);
    
    UFUNCTION()
    void OnRep_RepRightHandHeldActor(ASDIHeldActor* OldRepRightHandHeldActor);
    
    UFUNCTION()
    void OnRep_RepLeftHandTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepLeftHandTransform);
    
    UFUNCTION()
    void OnRep_RepLeftHandHeldActor(ASDIHeldActor* OldRepLeftHandHeldActor);
    
    UFUNCTION()
    void OnRep_RepInventoryList(const TArray<ASDIInventoryActor*>& OldRepInventoryList);
    
    UFUNCTION()
    void OnRep_RepHMDTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepHMDTransform);
    
public:
    UFUNCTION(BlueprintPure)
    FSDISpaceTimestampTransform_NetQuantize K2GetRepRightHandTransform() const;
    
    UFUNCTION(BlueprintPure)
    FSDISpaceTimestampTransform_NetQuantize K2GetRepLeftHandTransform() const;
    
    UFUNCTION(BlueprintPure)
    FSDISpaceTimestampTransform_NetQuantize K2GetLerpRightHandTransform() const;
    
    UFUNCTION(BlueprintPure)
    FSDISpaceTimestampTransform_NetQuantize K2GetLerpLeftHandTransform() const;
    
    UFUNCTION(BlueprintPure)
    FSDISpaceTimestampTransform_NetQuantize K2GetLerpHMDTransform() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNonVRObjectInteracting() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrabItemFromInventory(ASDIInventoryActor* InvActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand);
    
    UFUNCTION(BlueprintCallable)
    bool GrabHeldActor(ASDIHeldActor* HeldActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bAddToInventory);
    
    UFUNCTION(BlueprintCallable)
    bool GrabClassFromInventory(TSubclassOf<ASDIInventoryActor> InvClass, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bExact);
    
    UFUNCTION(BlueprintPure)
    ESignificanceState GetSignificanceState() const;
    
    UFUNCTION(BlueprintPure)
    float GetRightHandActivityLevel() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIPlayerHand> GetPlayerHandBlueprint(EControllerHand hand) const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetOtherPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintPure)
    float GetLeftHandActivityLevel() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIInteractiveHighlightManager> GetInteractiveHighlightManagerClass() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCamera() const;
    
    UFUNCTION(BlueprintCallable)
    bool DropHeldActor(ASDIHeldActor* HeldActor, bool bReturnToInventory, bool bRemoveFromInventory);
    
    UFUNCTION(BlueprintPure)
    FTransform ConvertTransformToSpace(const FSDISpaceTimestampTransform_NetQuantize& Transform, ESDITransformSpace Space) const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetHeldActor(EControllerHand hand, ASDIHeldActor* HeldActor) override PURE_VIRTUAL(SetHeldActor,);
    
    UFUNCTION()
    void ServerSetHeldBy(ASDIHeldActor* HeldActor, const FSDIReplicatedGripInfo& PrimaryGrip, const FSDIReplicatedGripInfo& SecondaryGrip) override PURE_VIRTUAL(ServerSetHeldBy,);
    
    UFUNCTION()
    void ServerClearHeldBy(ASDIHeldActor* HeldActor, const FTransform& Transform, const FVector& ThrowVelocity, const FVector& AngularVelocityDeg, const FSDIAttachmentInfo& AttachInfo, bool bCustomThrowPhysicsEngaged) override PURE_VIRTUAL(ServerClearHeldBy,);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetThirdPersonHeldActorAttachPoint(EControllerHand hand, FName& SocketName) const override PURE_VIRTUAL(GetThirdPersonHeldActorAttachPoint, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    ASDIPlayerHand* GetHolderPlayerHand(EControllerHand hand) const override PURE_VIRTUAL(GetHolderPlayerHand, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    ASDIHeldActor* GetHeldActor(EControllerHand hand) const override PURE_VIRTUAL(GetHeldActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetHMDTransform(ESDITransformSpace Space) const override PURE_VIRTUAL(GetHMDTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetHandTransform(EControllerHand hand, ESDITransformSpace Space) const override PURE_VIRTUAL(GetHandTransform, return FTransform{};);
    
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
    void SaR_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) override PURE_VIRTUAL(SaR_OnTakeAnyDamage,);
    
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
    FGuid K2GetExportGuid() const override PURE_VIRTUAL(K2GetExportGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FText GetExportText(FName Key) const override PURE_VIRTUAL(GetExportText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDisplayName() const override PURE_VIRTUAL(GetExportDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDescription() const override PURE_VIRTUAL(GetExportDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    bool FindExportText(FName Key, FText& OutText) const override PURE_VIRTUAL(FindExportText, return false;);
    
};

