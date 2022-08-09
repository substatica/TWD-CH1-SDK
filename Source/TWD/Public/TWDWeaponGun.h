#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDTimeDilationActorData.h"
#include "SDIWeaponFirearm.h"
#include "RIntExp.h"
#include "TWDSeamlessTravelActorInterface.h"
#include "TWDInventoryActorInterface.h"
#include "TWDTimeDilationActorInterface.h"
#include "TWDDurabilityInterface.h"
#include "TWDInteractiveHighlightInterface.h"
#include "TWDInventoryActorBlueprintInterface.h"
#include "TWDInventoryActorInterfaceData.h"
#include "SDICameraSwaySettings.h"
#include "TWDReplicatedInventoryActorInterfaceData.h"
#include "TWDReplicatedDurabilityInterfaceData.h"
#include "TWDDurabilityInterfaceData.h"
#include "ETWDNonVREquipmentType.h"
#include "SDITuningAttribute_TWDWeaponGun.h"
#include "RFloatExp.h"
#include "Curves/CurveFloat.h"
#include "SDICurveAnimation.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.h"
#include "EWeaponAnimation.h"
#include "ESDIInteractiveInteractType.h"
#include "Engine/EngineTypes.h"
#include "ETWDLootType.h"
#include "ETWDInventoryType.h"
#include "TWDWeaponGun.generated.h"

class UPrimitiveComponent;
class UTWDAutoTickAkComponent;
class UTWDWeaponShoveComponent;
class USceneComponent;
class UHapticFeedbackEffect_Base;
class ATWDWeaponGun;
class UCapsuleComponent;
class USDIAsyncOverlapEventGeneratorComponent;
class UArrowComponent;
class UAkAudioEvent;
class ASDIInventoryActor;
class ATWDAmmoProp;
class ATWDCharacter;
class ATWDProp;
class ATWDWeaponActorAttachmentEditor;
class AActor;
class ASDIWeaponFirearmAmmo;
class ATWDBackpack;
class ASDIInventorySlot;

UCLASS()
class ATWDWeaponGun : public ASDIWeaponFirearm, public ITWDSeamlessTravelActorInterface, public ITWDInventoryActorInterface, public ITWDTimeDilationActorInterface, public ITWDInteractiveHighlightInterface, public ITWDDurabilityInterface, public ITWDInventoryActorBlueprintInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDAutoTickAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWeaponShoveComponent* WeaponShoveComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDInventoryActorInterfaceData TWDInventoryData;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RepTWDInventoryData)
    FTWDReplicatedInventoryActorInterfaceData RepTWDInventoryData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDDurabilityInterfaceData TWDDurabilityData;
    
    UPROPERTY(ReplicatedUsing=OnRep_RepTWDDurabilityData)
    FTWDReplicatedDurabilityInterfaceData RepTWDDurabilityData;
    
    UPROPERTY(EditAnywhere, Replicated)
    FTWDTimeDilationActorData RepTimeDilationData;
    
    UPROPERTY(EditAnywhere, Replicated)
    FTWDTimeDilationActorData RepPlayerTimeDilationData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FireNoiseRadius;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* ReloadClipLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* ReloadClipFeedback;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* ReloadCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIAsyncOverlapEventGeneratorComponent* ReloadCollisionOverlapGenerator;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* ReloadDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReloadConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* FiredRoundAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* DryFireAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* JammedFireAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FSDICameraSwaySettings NonVRWindedGunAimSway;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATWDAmmoProp> ReloadAmmoPropClass;
    
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDAmmoProp>> ActiveAmmoProps;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bReloadWithSingleRound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp DurabilityCostPerShot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve DurabilityJamChance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve DurabilityAdditionalSpreadDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRIntExp DurabilityUnJamActionCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATWDProp> BrokenReplacementPropClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICurveAnimation ADSAccuracyCurveAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve FiringAccuracyCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICurveAnimation WindedAccuracyModifierCurveAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ATWDWeaponActorAttachmentEditor* AttachmentEditor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bRepGunJammed)
    bool bRepGunJammed;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 RepDurabilityUnJamActionCounter;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ReloadClipLocationReplacement;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ReloadDirectionReplacement;
    
    UPROPERTY(Transient)
    TArray<float> FiringAccuracyCurveTimes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentAccuracy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAccuracyIsAnimating;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EWeaponAnimation WeaponAnimType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsRevolver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlatformDoEjectClipOnDryFire;
    
    ATWDWeaponGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ATWDWeaponGun* TuneTWDWeaponGun(FSDITuningAttribute_TWDWeaponGun Attr, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable)
    void StopAkAudioComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetJammed(bool bJammed, int32 UnJamActionCounter);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAkAudioComponentSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetAkAudioComponentRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetJammed(bool bJammed, int32 UnJamActionCounter);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetInventorySlotIdx_IFC(uint8 InventorySlotIdx);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropAmmoProp(int32 AmmoToDrop, AActor* PropOwner, const FTransform& DropTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReloadSingleRound(TSubclassOf<ASDIWeaponFirearmAmmo> AmmoClass, int32 NewAmmoCount);
    
public:
    UFUNCTION(BlueprintPure)
    bool PredictFireModeTransform(ESDIInteractiveInteractType Type, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable)
    int32 PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformUnJamAction();
    
protected:
    UFUNCTION()
    void OnRep_RepTWDInventoryData_Timer();
    
    UFUNCTION()
    void OnRep_RepTWDInventoryData(const FTWDReplicatedInventoryActorInterfaceData& OldRepTWDInventoryData);
    
    UFUNCTION()
    void OnRep_RepTWDDurabilityData(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDDurabilityData);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRep_bRepGunJammed(bool OldbRepGunJammed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    bool NeedsReloading() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsThreat(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsJammed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHipFiring() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHighThreat(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsCompatibleAmmoProp(const ATWDAmmoProp* AmmoProp) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsClipEjectedOrChamberOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool GetReloadWithSingleRound() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmmoPropCurrencyCount() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetAmmoPropCurrencyClass() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool AkAudioComponentHasActiveEvents() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool ShouldApplyPrimaryGripPitchOffsetUserSetting() const override PURE_VIRTUAL(ShouldApplyPrimaryGripPitchOffsetUserSetting, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetSerializationString(const FString& NewString) override PURE_VIRTUAL(SetSerializationString,);
    
    UFUNCTION(BlueprintCallable)
    void SetNearbyHighlightShown(bool bShown) override PURE_VIRTUAL(SetNearbyHighlightShown,);
    
    UFUNCTION()
    void OnRep_RepTWDInventoryData_Internal() override PURE_VIRTUAL(OnRep_RepTWDInventoryData_Internal,);
    
    UFUNCTION(BlueprintCallable)
    FTWDInventoryActorInterfaceData K2GetTWDInventoryData() const override PURE_VIRTUAL(K2GetTWDInventoryData, return FTWDInventoryActorInterfaceData{};);
    
    UFUNCTION(BlueprintCallable)
    bool IsNearbyHighlightShown() const override PURE_VIRTUAL(IsNearbyHighlightShown, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideBackpack(ATWDBackpack*& Backpack) const override PURE_VIRTUAL(IsInsideBackpack, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTWDSlotTransform(ASDIInventorySlot* InvSlot, const ASDIInventoryActor* InterfaceImpl) const override PURE_VIRTUAL(GetTWDSlotTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    float GetThrowRating() const override PURE_VIRTUAL(GetThrowRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetSharpnessRating() const override PURE_VIRTUAL(GetSharpnessRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FString GetSerializationString() const override PURE_VIRTUAL(GetSerializationString, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    ETWDNonVREquipmentType GetNonVREquipmentType() const override PURE_VIRTUAL(GetNonVREquipmentType, return ETWDNonVREquipmentType::None;);
    
    UFUNCTION(BlueprintCallable)
    FText GetLootTypeText() const override PURE_VIRTUAL(GetLootTypeText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    ETWDLootType GetLootType() const override PURE_VIRTUAL(GetLootType, return ETWDLootType::Default;);
    
    UFUNCTION(BlueprintCallable)
    FText GetInventoryTypeText() const override PURE_VIRTUAL(GetInventoryTypeText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    ETWDInventoryType GetInventoryType() const override PURE_VIRTUAL(GetInventoryType, return ETWDInventoryType::Default;);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetInventorySlotIdx() const override PURE_VIRTUAL(GetInventorySlotIdx, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryDisplayInfo(FText& Name, int32& Count, FText& Type, FText& NewDescription, FText& NewFlavorText, float& SharpnessRating, float& DurabilityRating, float& ThrowRating, bool& bStabbingAllowed, bool& bDismemberAllowed) const override PURE_VIRTUAL(GetInventoryDisplayInfo,);
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityRating() const override PURE_VIRTUAL(GetDurabilityRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    bool DropOnArmGrapple() const override PURE_VIRTUAL(DropOnArmGrapple, return false;);
    
    UFUNCTION()
    void OnRep_RepTWDDurabilityData_Internal(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDInventoryData) override PURE_VIRTUAL(OnRep_RepTWDDurabilityData_Internal,);
    
};

