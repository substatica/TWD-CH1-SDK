#include "SDIWeaponFirearm.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UHapticFeedbackEffect_Base;
class ASDIWeaponFirearm;
class USDIWeaponFirearmFireModeComponent;
class ASDIWeaponFirearmAmmo;
class ASDIInventoryActor;
class USDIWeaponFirearmADSComponent;

void ASDIWeaponFirearm::UnloadClip_Implementation() {
}

int32 ASDIWeaponFirearm::UnChamberRound_Implementation(int32 Amt, bool bReturnToClip, bool bReturnToCurrency) {
    return 0;
}

ASDIWeaponFirearm* ASDIWeaponFirearm::TuneSDIWeaponFirearmFireMode(FSDITuningAttribute_SDIWeaponFirearmFireModeComponent Attr, FName FireModeName, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

ASDIWeaponFirearm* ASDIWeaponFirearm::TuneSDIWeaponFirearm(FSDITuningAttribute_SDIWeaponFirearm Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

bool ASDIWeaponFirearm::StopFire_Implementation(ESDIInteractiveInteractType Firemode) {
    return false;
}

void ASDIWeaponFirearm::StopAllFire(bool bImmediately) {
}

bool ASDIWeaponFirearm::StartFire_Implementation(ESDIInteractiveInteractType Firemode) {
    return false;
}

void ASDIWeaponFirearm::SetRandomAmmoCount(int32 Min, int32 Max) {
}

void ASDIWeaponFirearm::SetFireMode_Implementation(ESDIInteractiveInteractType Firemode, USDIWeaponFirearmFireModeComponent* FireModeComp) {
}

void ASDIWeaponFirearm::SetAmmoCount(int32 AmmoCount) {
}

void ASDIWeaponFirearm::ServerSetAmmoCount_Implementation(int32 NewAmmoCount, int32 NewChamberedAmmoCount) {
}
bool ASDIWeaponFirearm::ServerSetAmmoCount_Validate(int32 NewAmmoCount, int32 NewChamberedAmmoCount) {
    return true;
}

void ASDIWeaponFirearm::ReloadClip_Implementation(TSubclassOf<ASDIWeaponFirearmAmmo> AmmoClass, int32 NewAmmoCount) {
}

void ASDIWeaponFirearm::OnRep_RepChamberedAmmoCount(int32 OldRepChamberedAmmoCount) {
}

void ASDIWeaponFirearm::OnRep_RepAmmoCount(int32 OldRepAmmoCount) {
}

void ASDIWeaponFirearm::ModeStoppedFiring_Implementation(USDIWeaponFirearmFireModeComponent* Firemode) {
}

void ASDIWeaponFirearm::ModeStartedFiring_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire) {
}

bool ASDIWeaponFirearm::ModeShouldChamberNextRound_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo) {
    return false;
}

FSDIWeaponFirearmFiredShotInfo ASDIWeaponFirearm::ModePrepareFiredShotInfo_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo) {
    return FSDIWeaponFirearmFiredShotInfo{};
}

void ASDIWeaponFirearm::ModeGetFireFeedback_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, bool bRefire, UHapticFeedbackEffect_Base*& Primary, UHapticFeedbackEffect_Base*& Secondary) {
}

void ASDIWeaponFirearm::ModeFiredRound_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo) {
}

void ASDIWeaponFirearm::ModeDryFire_Implementation(USDIWeaponFirearmFireModeComponent* Firemode) {
}

bool ASDIWeaponFirearm::ModeCanFireRound_Implementation(USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* FiredAmmo, int32 Cost) {
    return false;
}

FTransform ASDIWeaponFirearm::ModeApplySpread_Implementation(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread) {
    return FTransform{};
}

bool ASDIWeaponFirearm::IsNoReloadEnabled() const {
    return false;
}

bool ASDIWeaponFirearm::IsADS() const {
    return false;
}

ESDIInteractiveInteractType ASDIWeaponFirearm::GetFireModeIndex_Implementation(const USDIWeaponFirearmFireModeComponent* Firemode) const {
    return ESDIInteractiveInteractType::Primary;
}

USDIWeaponFirearmFireModeComponent* ASDIWeaponFirearm::GetFireMode_Implementation(ESDIInteractiveInteractType Firemode) const {
    return NULL;
}

int32 ASDIWeaponFirearm::GetClipSize() const {
    return 0;
}

int32 ASDIWeaponFirearm::GetChamberSize() const {
    return 0;
}

int32 ASDIWeaponFirearm::GetChamberedAmmoCount() const {
    return 0;
}

int32 ASDIWeaponFirearm::GetAvailableCurrencyCount() const {
    return 0;
}

ASDIInventoryActor* ASDIWeaponFirearm::GetAmmoCurrency() const {
    return NULL;
}

int32 ASDIWeaponFirearm::GetAmmoCount(bool bIncludeChamber) const {
    return 0;
}

ASDIWeaponFirearmAmmo* ASDIWeaponFirearm::GetAmmo() const {
    return NULL;
}

int32 ASDIWeaponFirearm::GetAllowedAmmoCount() const {
    return 0;
}

USDIWeaponFirearmADSComponent* ASDIWeaponFirearm::GetADSComponent() const {
    return NULL;
}

int32 ASDIWeaponFirearm::DecAmmoCount_Implementation(int32 Amt, bool bRechamber) {
    return 0;
}

void ASDIWeaponFirearm::ClipEmpty_Implementation(bool bFromUnload) {
}

int32 ASDIWeaponFirearm::ChamberRound_Implementation(int32 Amt) {
    return 0;
}

int32 ASDIWeaponFirearm::AddAmmoToClip_Implementation(int32 Amt) {
    return 0;
}

void ASDIWeaponFirearm::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIWeaponFirearm, RepInitialRepAmmoCountHack);
    DOREPLIFETIME(ASDIWeaponFirearm, RepInitialRepChamberedAmmoCountHack);
    DOREPLIFETIME(ASDIWeaponFirearm, RepAmmoCount);
    DOREPLIFETIME(ASDIWeaponFirearm, RepChamberedAmmoCount);
}

ASDIWeaponFirearm::ASDIWeaponFirearm() {
    this->RepInitialRepAmmoCountHack = 0;
    this->RepInitialRepChamberedAmmoCountHack = 0;
    this->PrimaryClipEmptyFeedback = NULL;
    this->SecondaryClipEmptyFeedback = NULL;
    this->ClipSize = 1;
    this->ChamberSize = 1;
    this->bChamberIsPartOfClip = false;
    this->bAutoChamberFirstRoundOnReloadClip = true;
    this->bRemoveChamberedRoundsOnUnloadClip = true;
    this->bNonPlayerAutoChambersRounds = true;
    this->DefaultAmmoClass = NULL;
    this->ADSComponent = NULL;
    this->RepAmmoCount = 0;
    this->RepChamberedAmmoCount = 0;
    this->DryFireCount = 0;
    this->LastDryFireTimestamp = 0.00f;
    this->bClipLoaded = true;
    this->bAmmoHasBeenSetExternally = false;
}

