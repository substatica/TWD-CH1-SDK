#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "SDIRecoilEntry.h"
#include "ESDIInteractiveInteractType.h"
#include "SDIRecoil.h"
#include "SDIComponentReplacement.h"
#include "SDICameraRecoilSettings.h"
#include "SDISpreadSettings.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmFireModeComponent.generated.h"

class UHapticFeedbackEffect_Base;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIWeaponFirearmFireModeComponent : public UArrowComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIInteractiveInteractType DefaultInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepeatingFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVariableFireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotsPerSecondTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBurstFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstShotsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIRecoil Recoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraRecoilSettings NonVRRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraRecoilSettings NonVRRecoilADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> SpreadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> PlayerSpreadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> NonVRPlayerSpreadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoChamberNextRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryStartFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryRefireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryStopFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryFireRoundFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryDryFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryStartFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryRefireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryStopFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryFireRoundFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryDryFireFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFiringRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFiringRequestHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RefireTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BurstCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BurstTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoundsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIRecoilEntry> TwoHandedRecoilEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIRecoilEntry> PrimaryRecoilEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIRecoilEntry> SecondaryRecoilEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetShotTransform(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, bool bIgnoreSpread);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryStopFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryStartFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryRefireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryFireRoundFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetSecondaryDryFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDIRecoil GetRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryStopFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryStartFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryRefireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryFireRoundFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetPrimaryDryFireFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDICameraRecoilSettings GetNonVRRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetFireModeTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDIComponentReplacement GetFireModeComponentAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIInteractiveInteractType GetDefaultInteractionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBurstCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AutoChamberNextRound() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform ApplySpread(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
};

