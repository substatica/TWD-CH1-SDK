#include "SDIWeaponHitHistoryComponent.h"

class UPrimitiveComponent;

void USDIWeaponHitHistoryComponent::UpdateHistory() {
}

void USDIWeaponHitHistoryComponent::ResetHistory() {
}

void USDIWeaponHitHistoryComponent::ResetDamageHistoryTimestamp(UPrimitiveComponent* Component) {
}

void USDIWeaponHitHistoryComponent::ResetDamageHistory() {
}

void USDIWeaponHitHistoryComponent::ResetCollisionHistoryTimestamp(UPrimitiveComponent* Component, FName BodyName) {
}

void USDIWeaponHitHistoryComponent::ResetCollisionHistory() {
}

bool USDIWeaponHitHistoryComponent::HasDamaged(UPrimitiveComponent* Component, bool bUseActor, float OverrideHistoryDuration) const {
    return false;
}

bool USDIWeaponHitHistoryComponent::HasCollidedWith(UPrimitiveComponent* Component, FName BodyName, bool bUseActor, float OverrideHistoryDuration) const {
    return false;
}

void USDIWeaponHitHistoryComponent::AddToDamageHistory(UPrimitiveComponent* Component) {
}

void USDIWeaponHitHistoryComponent::AddToCollisionHistory(const FSDIWeaponHitEntry& Entry, bool bUpdate) {
}

void USDIWeaponHitHistoryComponent::AddArrayToDamageHistory(const TArray<FSDIWeaponHitEntry>& NewHits) {
}

void USDIWeaponHitHistoryComponent::AddArrayToCollisionHistory(const TArray<FSDIWeaponHitEntry>& NewHits) {
}

USDIWeaponHitHistoryComponent::USDIWeaponHitHistoryComponent() {
}

