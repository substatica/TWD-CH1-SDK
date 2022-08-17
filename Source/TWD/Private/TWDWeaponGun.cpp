#include "TWDWeaponGun.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "SDIAsyncOverlapEventGeneratorComponent.h"
#include "TWDAutoTickAkComponent.h"
#include "TWDImpactEffectsComponent.h"
#include "TWDWeaponShoveComponent.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"

class ATWDWeaponGun;
class AActor;
class ASDIWeaponFirearmAmmo;
class UAkAudioEvent;
class UPrimitiveComponent;
class ATWDCharacter;
class ASDIInventoryActor;
class ATWDAmmoProp;

ATWDWeaponGun* ATWDWeaponGun::TuneTWDWeaponGun(FSDITuningAttribute_TWDWeaponGun Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

void ATWDWeaponGun::StopAkAudioComponent() {
}

void ATWDWeaponGun::SetJammed_Implementation(bool bJammed, int32 UnJamActionCounter) {
}

void ATWDWeaponGun::SetAkAudioComponentSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void ATWDWeaponGun::SetAkAudioComponentRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

void ATWDWeaponGun::ServerSetJammed_Implementation(bool bJammed, int32 UnJamActionCounter) {
}
bool ATWDWeaponGun::ServerSetJammed_Validate(bool bJammed, int32 UnJamActionCounter) {
    return true;
}

void ATWDWeaponGun::ServerSetInventorySlotIdx_IFC_Implementation(uint8 InventorySlotIdx) {
}
bool ATWDWeaponGun::ServerSetInventorySlotIdx_IFC_Validate(uint8 InventorySlotIdx) {
    return true;
}

void ATWDWeaponGun::ServerDropAmmoProp_Implementation(int32 AmmoToDrop, AActor* PropOwner, const FTransform& DropTransform) {
}
bool ATWDWeaponGun::ServerDropAmmoProp_Validate(int32 AmmoToDrop, AActor* PropOwner, const FTransform& DropTransform) {
    return true;
}

void ATWDWeaponGun::ReloadSingleRound_Implementation(TSubclassOf<ASDIWeaponFirearmAmmo> AmmoClass, int32 NewAmmoCount) {
}

bool ATWDWeaponGun::PredictFireModeTransform(ESDIInteractiveInteractType Type, FTransform& OutTransform) const {
    return false;
}

int32 ATWDWeaponGun::PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName) {
    return 0;
}

bool ATWDWeaponGun::PerformUnJamAction_Implementation() {
    return false;
}

void ATWDWeaponGun::OnRep_RepTWDInventoryData_Timer() {
}

void ATWDWeaponGun::OnRep_RepTWDInventoryData(const FTWDReplicatedInventoryActorInterfaceData& OldRepTWDInventoryData) {
}

void ATWDWeaponGun::OnRep_RepTWDDurabilityData(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDDurabilityData) {
}

void ATWDWeaponGun::OnRep_bRepGunJammed_Implementation(bool OldbRepGunJammed) {
}

void ATWDWeaponGun::OnReloadCollisionEndOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATWDWeaponGun::OnReloadCollisionBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATWDWeaponGun::NeedsReloading() const {
    return false;
}

bool ATWDWeaponGun::IsThreat(ATWDCharacter* Character) {
    return false;
}

bool ATWDWeaponGun::IsJammed() const {
    return false;
}

bool ATWDWeaponGun::IsHipFiring() const {
    return false;
}

bool ATWDWeaponGun::IsHighThreat(ATWDCharacter* Character) {
    return false;
}

bool ATWDWeaponGun::IsCompatibleAmmoProp(const ATWDAmmoProp* AmmoProp) const {
    return false;
}

bool ATWDWeaponGun::IsClipEjectedOrChamberOpen_Implementation() const {
    return false;
}

bool ATWDWeaponGun::GetReloadWithSingleRound() const {
    return false;
}

int32 ATWDWeaponGun::GetAmmoPropCurrencyCount() const {
    return 0;
}

TSubclassOf<ASDIInventoryActor> ATWDWeaponGun::GetAmmoPropCurrencyClass() const {
    return NULL;
}

bool ATWDWeaponGun::CanBeLoaded_Implementation() const {
    return false;
}

bool ATWDWeaponGun::AkAudioComponentHasActiveEvents() const {
    return false;
}

void ATWDWeaponGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDWeaponGun, RepTWDInventoryData);
    DOREPLIFETIME(ATWDWeaponGun, RepTWDDurabilityData);
    DOREPLIFETIME(ATWDWeaponGun, RepTimeDilationData);
    DOREPLIFETIME(ATWDWeaponGun, RepPlayerTimeDilationData);
    DOREPLIFETIME(ATWDWeaponGun, bRepGunJammed);
    DOREPLIFETIME(ATWDWeaponGun, RepDurabilityUnJamActionCounter);
}

ATWDWeaponGun::ATWDWeaponGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UTWDImpactEffectsComponent>(TEXT("ImpactEffectsComponent"))) {
    this->AkAudioComponent = CreateDefaultSubobject<UTWDAutoTickAkComponent>(TEXT("AkAudioComponent"));
    this->WeaponShoveComp = CreateDefaultSubobject<UTWDWeaponShoveComponent>(TEXT("WeaponShove"));
    this->FireNoiseRadius = 1024.00f;
    this->ReloadClipLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ReloadClipLocation"));
    this->ReloadClipFeedback = NULL;
    this->ReloadCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ReloadCollision"));
    this->ReloadCollisionOverlapGenerator = CreateDefaultSubobject<USDIAsyncOverlapEventGeneratorComponent>(TEXT("ReloadCollisionOverlapGenerator"));
    this->ReloadDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("ReloadDirection"));
    this->ReloadConeAngle = 30.00f;
    this->FiredRoundAudioEvent = NULL;
    this->DryFireAudioEvent = NULL;
    this->JammedFireAudioEvent = NULL;
    this->ReloadAmmoPropClass = NULL;
    this->bReloadWithSingleRound = false;
    this->BrokenReplacementPropClass = NULL;
    this->AttachmentEditor = NULL;
    this->bRepGunJammed = false;
    this->RepDurabilityUnJamActionCounter = 0;
    this->CurrentAccuracy = 0.00f;
    this->bAccuracyIsAnimating = false;
    this->WeaponAnimType = EWeaponAnimation::Pistol;
    this->bIsRevolver = false;
    this->bPlatformDoEjectClipOnDryFire = false;
}

