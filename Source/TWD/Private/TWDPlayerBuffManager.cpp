#include "TWDPlayerBuffManager.h"
#include "Templates/SubclassOf.h"

class ATWDCharacter;
class UTWDSaveGame;
class ATWDWeaponGun;
class UTWDDamageType;
class ASDIInventoryActor;

void UTWDPlayerBuffManager::TickHealthRegen(float DeltaTime) {
}

void UTWDPlayerBuffManager::TickHealing(float DeltaTime) {
}

void UTWDPlayerBuffManager::StartHealthRegen() {
}

void UTWDPlayerBuffManager::StartHealing(const ATWDCharacter* PlayerCharacter, FName HealBuffName) {
}

void UTWDPlayerBuffManager::SetMaxStaminaBoostAmount(float NewMaxStaminaBoostAmount) {
}

void UTWDPlayerBuffManager::SetMaxHealthBoostAmount(float NewMaxHealthBoostAmount) {
}

void UTWDPlayerBuffManager::SaveTemporaryBuffs(UTWDSaveGame* SaveGame) {
}

void UTWDPlayerBuffManager::ResetBuffs() {
}

void UTWDPlayerBuffManager::RemoveTemporaryBuffs() {
}

void UTWDPlayerBuffManager::RemoveBuff(FName BuffName) {
}




void UTWDPlayerBuffManager::LoadTemporaryBuffs(UTWDSaveGame* SaveGame) {
}

bool UTWDPlayerBuffManager::IsNoReloadEnabled() const {
    return false;
}

float UTWDPlayerBuffManager::GetWeaponDurabilityDeltaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetStaminaRegenMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetSprintStaminaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetNoiseMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetMeleeWeaponDurabilityDeltaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetMeleeStaminaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetMaxStaminaBoostAmount() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetMaxHealthBoostAmount() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetInventoryCapacityMultiplier(TSubclassOf<ASDIInventoryActor> InventoryType) const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetHealthRegenTimeRemaining() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetHealthRegenRate() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetHealingTimeRemaining() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetHealingRate() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetGlobalStaminaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetDamageTakenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetDamageGivenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetCraftedGunDurabilityDeltaMultiplier(TSoftClassPtr<ATWDWeaponGun> GunClass) const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetBowDurabilityDeltaMultiplier() const {
    return 0.0f;
}

float UTWDPlayerBuffManager::GetArrowBreakChanceMultiplier() const {
    return 0.0f;
}

void UTWDPlayerBuffManager::CancelHealing() {
}

void UTWDPlayerBuffManager::AddBuff(FName BuffName) {
}

UTWDPlayerBuffManager::UTWDPlayerBuffManager() {
    this->NoiseFactor = 1.00f;
    this->SprintStaminaFactor = 1.00f;
    this->MeleeStaminaFactor = 1.00f;
    this->GlobalStaminaFactor = 1.00f;
    this->StaminaRegenFactor = 1.00f;
    this->WeaponDurabilityDeltaFactor = 1.00f;
    this->MeleeWeaponDurabilityDeltaFactor = 1.00f;
    this->CraftedGunDurabilityDeltaFactor = 1.00f;
    this->BowDurabilityDeltaFactor = 1.00f;
    this->ArrowBreakChanceFactor = 1.00f;
    this->bNoReload = false;
    this->MaxHealthBoostAmount = 0.00f;
    this->MaxStaminaBoostAmount = 0.00f;
    this->HealthRegenBuffName = TEXT("HealthRegen");
    this->HealthRegenDuration = 300.00f;
    this->HealthRegenRate = 0.00f;
    this->HealthRegenTimer = 0.00f;
    this->HealingRate = 0.00f;
    this->HealingTimer = 0.00f;
    this->HealingAmountRemaining = 0.00f;
}

