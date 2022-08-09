#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponActor.h"
#include "SDICameraSettings.h"
#include "ESDIInteractiveInteractType.h"
#include "SDITuningAttribute_SDIWeaponFirearm.h"
#include "SDITuningAttribute_SDIWeaponFirearmFireModeComponent.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearm.generated.h"

class USDIWeaponFirearmFireModeComponent;
class UHapticFeedbackEffect_Base;
class ASDIWeaponFirearmAmmo;
class USDIWeaponFirearmADSComponent;
class ASDIWeaponFirearm;
class ASDIInventoryActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearm : public ASDIWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    int32 RepInitialRepAmmoCountHack;
    
    UPROPERTY(Replicated, Transient)
    int32 RepInitialRepChamberedAmmoCountHack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* PrimaryClipEmptyFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* SecondaryClipEmptyFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ClipSize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChamberSize;
    
    UPROPERTY(EditDefaultsOnly)
    bool bChamberIsPartOfClip;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoChamberFirstRoundOnReloadClip;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRemoveChamberedRoundsOnUnloadClip;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNonPlayerAutoChambersRounds;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASDIWeaponFirearmAmmo> DefaultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USDIWeaponFirearmADSComponent* ADSComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraSettings ADSCameraSettings;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepAmmoCount)
    int32 RepAmmoCount;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepChamberedAmmoCount)
    int32 RepChamberedAmmoCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 DryFireCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastDryFireTimestamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bClipLoaded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAmmoHasBeenSetExternally;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<USDIWeaponFirearmFireModeComponent*> FireModes;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
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
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetAmmoCount(int32 NewAmmoCount, int32 NewChamberedAmmoCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReloadClip(TSubclassOf<ASDIWeaponFirearmAmmo> AmmoClass, int32 NewAmmoCount);
    
protected:
    UFUNCTION()
    void OnRep_RepChamberedAmmoCount(int32 OldRepChamberedAmmoCount);
    
    UFUNCTION()
    void OnRep_RepAmmoCount(int32 OldRepAmmoCount);
    
    UFUNCTION(BlueprintNativeEvent)
    void ModeStoppedFiring(USDIWeaponFirearmFireModeComponent* Firemode);
    
    UFUNCTION(BlueprintNativeEvent)
    void ModeStartedFiring(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ModeShouldChamberNextRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintNativeEvent)
    FSDIWeaponFirearmFiredShotInfo ModePrepareFiredShotInfo(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintNativeEvent)
    void ModeGetFireFeedback(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire, UHapticFeedbackEffect_Base*& Primary, UHapticFeedbackEffect_Base*& Secondary);
    
    UFUNCTION(BlueprintNativeEvent)
    void ModeFiredRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo);
    
    UFUNCTION(BlueprintNativeEvent)
    void ModeDryFire(USDIWeaponFirearmFireModeComponent* Firemode);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ModeCanFireRound(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo, int32 Cost);
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform ModeApplySpread(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNoReloadEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    ESDIInteractiveInteractType GetFireModeIndex(const USDIWeaponFirearmFireModeComponent* Firemode) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USDIWeaponFirearmFireModeComponent* GetFireMode(ESDIInteractiveInteractType Firemode) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetClipSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChamberSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChamberedAmmoCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAvailableCurrencyCount() const;
    
    UFUNCTION(BlueprintPure)
    ASDIInventoryActor* GetAmmoCurrency() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmmoCount(bool bIncludeChamber) const;
    
    UFUNCTION(BlueprintPure)
    ASDIWeaponFirearmAmmo* GetAmmo() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAllowedAmmoCount() const;
    
    UFUNCTION(BlueprintPure)
    USDIWeaponFirearmADSComponent* GetADSComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 DecAmmoCount(int32 Amt, bool bRechamber);
    
    UFUNCTION(BlueprintNativeEvent)
    void ClipEmpty(bool bFromUnload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ChamberRound(int32 Amt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAmmoToClip(int32 Amt);
    
};

