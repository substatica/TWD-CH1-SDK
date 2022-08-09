#include "TWDPlayerInventorySlot.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

class ASDIHeldActor;
class AActor;
class ASDIInventoryActor;
class ASDIPlayerHand;

bool ATWDPlayerInventorySlot::WasSlotRecentlyRendered(float Tolerance) const {
    return false;
}

void ATWDPlayerInventorySlot::UpdateVisual(bool bForceUpdate) {
}

void ATWDPlayerInventorySlot::UpdateValidState() {
}

void ATWDPlayerInventorySlot::UpdateMeshHighlighting(bool bForceUpdate) {
}

void ATWDPlayerInventorySlot::UpdateMeshColors() {
}

void ATWDPlayerInventorySlot::SetSlotHighlightActive(bool bActive) {
}

void ATWDPlayerInventorySlot::SetSlotActive(bool bActive) {
}



void ATWDPlayerInventorySlot::OnHeldActorGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* PlayerHand) {
}

void ATWDPlayerInventorySlot::OnHeldActorDropped(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* PlayerHand) {
}


bool ATWDPlayerInventorySlot::IsValidInventory_Implementation(ASDIInventoryActor* Inventory) {
    return false;
}

bool ATWDPlayerInventorySlot::IsActiveInventorySlot() const {
    return false;
}

bool ATWDPlayerInventorySlot::InventoryTypeAllowed(ASDIInventoryActor* Inv) const {
    return false;
}


ATWDPlayerInventorySlot::ATWDPlayerInventorySlot() {
    this->SlotCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SlotCollision"));
    this->InventoryType = ETWDInventoryType::Default;
    this->bIgnoreSlotScale = false;
    this->bUpdateVisualOnTick = false;
    this->bPlayInvalidNotificationOnOverlap = false;
    this->UIIndicator_SlotFullOpacity = 0.20f;
    this->UIIndicator_HighlightOpacity = 0.10f;
    this->UIIndicator_DefaultOpacity = 0.01f;
    this->InventorySlotTickGroup = ETWDPlayerCharacterTickInventory::Count;
    this->BackpackOwner = NULL;
    this->LimitTheseTypes.AddDefaulted(5);
    this->UIIndicator = NULL;
    this->PendingInventory = NULL;
    this->bSlotFull = false;
    this->bInvalidItem = false;
    this->bValidItem = false;
    this->bHighlightValid = false;
    this->bMeshHighlighted = false;
    this->bInteractionHighlight = false;
    this->LeftHeldActor = NULL;
    this->RightHeldActor = NULL;
    this->SlotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SlotMesh"));
    this->SlotType = ESlotType::Default;
    this->slotIdx = ETWDInventorySlot::None;
}

