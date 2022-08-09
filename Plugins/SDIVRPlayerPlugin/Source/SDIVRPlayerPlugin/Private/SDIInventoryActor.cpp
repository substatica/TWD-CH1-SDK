#include "SDIInventoryActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class ASDIInventorySlot;
class ASDIPlayerHand;
class AActor;
class APawn;
class ASDIInventoryActor;
class USceneComponent;

bool ASDIInventoryActor::ShouldMergeOnAddToInventory() const {
    return false;
}

void ASDIInventoryActor::SetSlot(ASDIInventorySlot* NewSlot) {
}

void ASDIInventoryActor::SetReturnToInventoryTimer(float Time) {
}

int32 ASDIInventoryActor::SetCount(int32 NewCount) {
    return 0;
}

void ASDIInventoryActor::ServerSetCount_Implementation(int32 NewCount) {
}
bool ASDIInventoryActor::ServerSetCount_Validate(int32 NewCount) {
    return true;
}

void ASDIInventoryActor::ServerReturnToInventory_Implementation(bool bFromTimer) {
}
bool ASDIInventoryActor::ServerReturnToInventory_Validate(bool bFromTimer) {
    return true;
}

void ASDIInventoryActor::ServerRemoveFromInventory_Implementation() {
}
bool ASDIInventoryActor::ServerRemoveFromInventory_Validate() {
    return true;
}

void ASDIInventoryActor::ReturnToInventoryTimer() {
}

void ASDIInventoryActor::ReturnToInventory_Implementation(bool bFromTimer) {
}

bool ASDIInventoryActor::ReturnOnDrop() const {
    return false;
}

void ASDIInventoryActor::RemoveFromOwner() {
}

void ASDIInventoryActor::OnRep_RepInventoryOwner(AActor* OldRepInventoryOwner) {
}

void ASDIInventoryActor::OnRep_RepCount(int32 OldRepCount) {
}

void ASDIInventoryActor::OnRep_bRepInsideInventory_Implementation(bool OldbRepInsideInventory) {
}

void ASDIInventoryActor::OnCountChanged_Implementation(int32 OldCount, int32 NewCount) {
}

bool ASDIInventoryActor::IsReturnToInventoryTimerActive() const {
    return false;
}

bool ASDIInventoryActor::IsOwnedByPlayer() const {
    return false;
}

bool ASDIInventoryActor::IsOwnedByAI() const {
    return false;
}

bool ASDIInventoryActor::IsInsideInventory() const {
    return false;
}

bool ASDIInventoryActor::GrabFromInventory_Implementation(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr) {
    return false;
}

void ASDIInventoryActor::GiveTo(AActor* NewOwner) {
}

void ASDIInventoryActor::GivenTo_Implementation(AActor* NewOwner, AActor* OldOwner) {
}

ASDIInventorySlot* ASDIInventoryActor::GetSlot() const {
    return NULL;
}

float ASDIInventoryActor::GetReturnToInventoryTime_Implementation() const {
    return 0.0f;
}

APawn* ASDIInventoryActor::GetOwnedByPawn() const {
    return NULL;
}

TSubclassOf<ASDIInventoryActor> ASDIInventoryActor::GetMergeClass() const {
    return NULL;
}

FTransform ASDIInventoryActor::GetInventorySlotGripTransform_Implementation(ASDIInventorySlot* InvSlot, USceneComponent*& GripPoint) const {
    return FTransform{};
}

AActor* ASDIInventoryActor::GetInventoryOwner() const {
    return NULL;
}

int32 ASDIInventoryActor::GetCount() const {
    return 0;
}

bool ASDIInventoryActor::DropFromInventory_Implementation() {
    return false;
}

void ASDIInventoryActor::ClearReturnToInventoryTimer() {
}

bool ASDIInventoryActor::CanBePutInInventorySlot() const {
    return false;
}

int32 ASDIInventoryActor::ApplyCountDelta(int32 Delta) {
    return 0;
}

void ASDIInventoryActor::AddDirectlyToInventory(AActor* NewOwner, ASDIInventorySlot* NewSlot) {
}

void ASDIInventoryActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIInventoryActor, RepInitialRepCountHack);
    DOREPLIFETIME(ASDIInventoryActor, RepCount);
    DOREPLIFETIME(ASDIInventoryActor, RepInventoryOwner);
    DOREPLIFETIME(ASDIInventoryActor, bRepInsideInventory);
}

ASDIInventoryActor::ASDIInventoryActor() {
    this->RepInitialRepCountHack = 1;
    this->bOverrideInitialRepCount = false;
    this->RepCount = 1;
    this->bMergeOnAddToInventory = false;
    this->MergeClassOverride = NULL;
    this->bCanDetachComponentsWhenInsideInventory = false;
    this->bReturnOnDrop = true;
    this->bCanBePutInInventorySlot = true;
    this->bLockGripOnGrab = false;
    this->DropReturnTime = 2.00f;
    this->PlayerDropReturnTime = -1.00f;
    this->DropReturnRadius = 0.00f;
    this->PlayerDropReturnRadius = -1.00f;
    this->Slot = NULL;
    this->RepInventoryOwner = NULL;
    this->LocalInventoryOwner = NULL;
    this->bLocalInventoryOwnerEverSet = false;
    this->bRepInsideInventory = false;
    this->bLocalInsideInventory = false;
    this->bLocalInsideInventoryEverSet = false;
    this->bRemoveOnDrop = true;
}

