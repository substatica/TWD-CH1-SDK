#include "SDIInventorySlot.h"

class ASDIInventoryActor;
class UPrimitiveComponent;
class USceneComponent;
class AActor;

void ASDIInventorySlot::SetDefaultInventory(bool bForce) {
}

ASDIInventoryActor* ASDIInventorySlot::SetCurrentInventoryToNext(int32 Dir, bool bLoop) {
    return NULL;
}

ASDIInventoryActor* ASDIInventorySlot::SetCurrentInventory_Implementation(ASDIInventoryActor* Inv) {
    return NULL;
}

void ASDIInventorySlot::SetBodyMounted(bool bMounted) {
}

void ASDIInventorySlot::SetAutoManageAttachment(bool bInAutoManageAttachment) {
}

void ASDIInventorySlot::OnInventoryPutInSlotFailed_Implementation(ASDIInventoryActor* Inv) {
}

bool ASDIInventorySlot::IsSlotAttachedTo(USceneComponent* Component) const {
    return false;
}

bool ASDIInventorySlot::IsBodyMounted() const {
    return false;
}

bool ASDIInventorySlot::InventoryAllowed_Implementation(ASDIInventoryActor* Inv, bool bFromHand) const {
    return false;
}

bool ASDIInventorySlot::HideAttachedInventory(ASDIInventoryActor* Inv) const {
    return false;
}

ASDIInventoryActor* ASDIInventorySlot::GetNextInventory_Implementation(int32 Dir, bool bLoop) const {
    return NULL;
}

AActor* ASDIInventorySlot::GetInventoryOwner() const {
    return NULL;
}

USceneComponent* ASDIInventorySlot::GetInventoryAttachPoint_Implementation(ASDIInventoryActor* Inv, FName& SocketName) const {
    return NULL;
}

ASDIInventoryActor* ASDIInventorySlot::GetCurrentInventory() const {
    return NULL;
}

FVector ASDIInventorySlot::GetBodyMountedInteractLocation_Implementation(UPrimitiveComponent* Component, const FVector& OriginalLocation, ESDIInteractRangeType RangeType, const FVector& HandLocation) const {
    return FVector{};
}

bool ASDIInventorySlot::AttachInventory_Implementation(ASDIInventoryActor* Inv, bool bAllowInterpolation) {
    return false;
}

ASDIInventorySlot::ASDIInventorySlot() {
    this->DefaultInventory = NULL;
    this->bHideAttachedInventory = true;
    this->bInterpolateAttachedInventory = true;
    this->bAutoSetToNextItemOnItemRemoval = false;
    this->bAllowInventoryCollisionForDrop = true;
    this->bAllowInventoryCollisionForGrab = true;
    this->bAutoManageAttachment = true;
    this->bBodyMounted = false;
    this->bRequireCloseLOS = false;
    this->bRequireRangedLOS = true;
    this->CurrentInventory = NULL;
    this->bDefaultInventorySet = false;
}

