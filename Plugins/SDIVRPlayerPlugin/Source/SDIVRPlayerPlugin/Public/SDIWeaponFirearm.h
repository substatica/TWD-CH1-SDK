#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponActor.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "SDICameraSettings.h"
#include "ESDIInteractiveInteractType.h"
#include "SDITuningAttribute_SDIWeaponFirearm.h"
#include "SDITuningAttribute_SDIWeaponFirearmFireModeComponent.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearm.generated.h"

class USDIWeaponFirearmFireModeComponent;
class UHapticFeedbackEffect_Base;
class ASDIWeaponFirearmAmmo;
class USDIWeaponFirearmADSComponent;
class ASDIWeaponFirearm;
class ASDIInventoryActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearm : public ASDIWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RepInitialRepAmmoCountHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RepInitialRepChamberedAmmoCountHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* PrimaryClipEmptyFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* SecondaryClipEmptyFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChamberSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChamberIsPartOfClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoChamberFirstRoundOnReloadClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveChamberedRoundsOnUnloadClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonPlayerAutoChambersRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIWeaponFirearmAmmo> DefaultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIWeaponFirearmADSComponent* ADSComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings ADSCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepAmmoCount, meta=(AllowPrivateAccess=true))
    int32 RepAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepChamberedAmmoCount, meta=(AllowPrivateAccess=true))
    int32 RepChamberedAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DryFireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDryFireTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClipLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAmmoHasBeenSetExternally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USDIWeaponFirearmFireModeComponent*> FireModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESDIInteractiveInteractType, USDIWeaponFirearmFireModeComponent*> FireModeMap;
    
public:
    ASDIWeaponFirearm();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnloadClip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 UnChamberRound(int32 Amt, bool bReturnToClip, bool bReturnToCurrency);
    
    UFUNCTION(BlueprintCallable)
    ASDIWeaponFirearm* TuneSDIWeaponFirearmFireMode(FSDITuningAttribute_SDIWeaponFirearmFireModeComponent Attr, FName FireModeName, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable)
    ASDIWeaponFirearm* TuneSDIWeaponFirearm(FSDITuningAttribute_SDIWeaponFirearm Attr, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StopFire(ESDIInteractiveInteractType Firemode);
    
    UFUNCTION(BlueprintCallable)
    void StopAllFire(bool bImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartFire(ESDIInteractiveInteractType Firemode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRandomAmmoCount(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFireMode(ESDIInteractiveInteractType Firemode, USDIWeaponFirearmFireModeComponent* FireModeComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAmmoCount(int32 AmmoCount);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAmmoCount(int32 NewAmmoCount, int32 NewChamberedAmmoCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReloadClip(TSubclassOf<ASDIWeaponFirearmAmmo> AmmoClass, int32 NewAmmoCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepChamberedAmmoCount(int32 OldRepChamberedAmmoCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepAmmoCount(int32 OldRepAmmoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModeStoppedFiring(USDIWeaponFirearmFireModeComponent* Firemode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModeStartedFiring(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ModeShouldChamberNextRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSDIWeaponFirearmFiredShotInfo ModePrepareFiredShotInfo(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModeGetFireFeedback(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire, UHapticFeedbackEffect_Base*& Primary, UHapticFeedbackEffect_Base*& Secondary);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModeFiredRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModeDryFire(USDIWeaponFirearmFireModeComponent* Firemode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ModeCanFireRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo, int32 Cost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform ModeApplySpread(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoReloadEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ESDIInteractiveInteractType GetFireModeIndex(const USDIWeaponFirearmFireModeComponent* Firemode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USDIWeaponFirearmFireModeComponent* GetFireMode(ESDIInteractiveInteractType Firemode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClipSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChamberSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChamberedAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableCurrencyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetAmmoCurrency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCount(bool bIncludeChamber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIWeaponFirearmAmmo* GetAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllowedAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIWeaponFirearmADSComponent* GetADSComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 DecAmmoCount(int32 Amt, bool bRechamber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClipEmpty(bool bFromUnload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ChamberRound(int32 Amt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAmmoToClip(int32 Amt);
    
};

