#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "ESDIInteractiveInteractType.h"
#include "SDIRecoilEntry.h"
#include "SDIRecoil.h"
#include "SDICameraRecoilSettings.h"
#include "SDISpreadSettings.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "SDIWeaponFirearmFireModeComponent.generated.h"

class UHapticFeedbackEffect_Base;
class USceneComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIWeaponFirearmFireModeComponent : public UArrowComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIInteractiveInteractType DefaultInteractionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRepeatingFire;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bVariableFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShotsPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShotsPerSecondTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bBurstFire;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BurstShots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BurstShotsPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpreadDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIRecoil Recoil;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraRecoilSettings NonVRRecoil;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraRecoilSettings NonVRRecoilADS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> SpreadSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> PlayerSpreadSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> NonVRPlayerSpreadSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAutoChamberNextRound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryStartFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryRefireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryStopFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryFireRoundFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryDryFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryStartFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryRefireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryStopFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryFireRoundFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryDryFireFeedback;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFiringRequested;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFiringRequestHeld;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RefireTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 BurstCounter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BurstTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 RoundsFired;
    
    UPROPERTY(Transient)
    TArray<FSDIRecoilEntry> TwoHandedRecoilEntries;
    
    UPROPERTY(Transient)
    TArray<FSDIRecoilEntry> PrimaryRecoilEntries;
    
    UPROPERTY(Transient)
    TArray<FSDIRecoilEntry> SecondaryRecoilEntries;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ComponentAttachment;
    
public:
    USDIWeaponFirearmFireModeComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTickEnabled();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopFire();
    
    UFUNCTION(BlueprintCallable)
    void RequestFire();
    
    UFUNCTION(BlueprintPure)
    bool IsReadyToFire() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetShotTransform(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, bool bIgnoreSpread);
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryStopFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryStartFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryRefireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryFireRoundFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryDryFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    FSDIRecoil GetRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryStopFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryStartFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryRefireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryFireRoundFeedback() const;
    
    UFUNCTION(BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryDryFireFeedback() const;
    
    UFUNCTION(BlueprintPure)
    FSDICameraRecoilSettings GetNonVRRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetFireModeTransform() const;
    
    UFUNCTION(BlueprintPure)
    FSDIComponentReplacement GetFireModeComponentAttachment() const;
    
    UFUNCTION(BlueprintPure)
    ESDIInteractiveInteractType GetDefaultInteractionType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBurstCounter() const;
    
    UFUNCTION(BlueprintPure)
    bool AutoChamberNextRound() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform ApplySpread(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
};

