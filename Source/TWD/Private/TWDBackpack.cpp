#include "TWDBackpack.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "SDIPointGripComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

class ATWDPlayerInventorySlot;
class ASDIPlayerHand;
class UPrimitiveComponent;
class ASDIInventoryActor;
class ATWDBackpackInventorySlot;
class UTWDNonVRBackpackWidget;
class ASDIInventorySlot;

void ATWDBackpack::UpdateSlotIndexForCurrentPage() {
}

void ATWDBackpack::StopNonVRInteraction() {
}

void ATWDBackpack::StartNonVRInteraction() {
}

bool ATWDBackpack::ShouldGrabInventoryInsteadOfInteract(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const {
    return false;
}

void ATWDBackpack::SetUIMeshElementVisible(int32 MeshElementIndex, bool bVisible) {
}

void ATWDBackpack::SetUIMeshElementColor(int32 MeshElementIndex, const FLinearColor& Color) {
}

void ATWDBackpack::SetSlotUIMeshElementVisible(ATWDBackpackInventorySlot* InvSlot, bool bVisible, bool bAuxVisible) {
}

void ATWDBackpack::SetAvailablePages(int32 NewAvailablePages) {
}

void ATWDBackpack::RefreshBackpackSlots() {
}

void ATWDBackpack::QuickInventorySlotChanged(ATWDPlayerInventorySlot* InventorySlot, ASDIInventoryActor* CurrentInventory) {
}


void ATWDBackpack::OnPageFlip_Implementation(int32 PrevPageIndex, int32 CurrentPageIndex) {
}

void ATWDBackpack::OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory) {
}

void ATWDBackpack::OnBackpackContentChanged_Implementation(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory) {
}

void ATWDBackpack::OnAutoPlaceSpecialInventory_Implementation(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory, bool bShowHMDNotification) {
}

void ATWDBackpack::OnAutoPlaceAmmo_Implementation(ASDIInventoryActor* InventoryActor) {
}

void ATWDBackpack::NonVRNavigate(EUIDirection Direction) {
}

bool ATWDBackpack::IsUIMeshElementVisible(int32 MeshElementIndex) const {
    return false;
}

bool ATWDBackpack::IsScrapEnabled() const {
    return false;
}

void ATWDBackpack::InputNonVRScrap() {
}

void ATWDBackpack::InputNonVRPageRight() {
}

void ATWDBackpack::InputNonVRPageLeft() {
}

void ATWDBackpack::InputNonVRNavUp() {
}

void ATWDBackpack::InputNonVRNavRight() {
}

void ATWDBackpack::InputNonVRNavLeft() {
}

void ATWDBackpack::InputNonVRNavDown() {
}

void ATWDBackpack::InputNonVRInteract() {
}

void ATWDBackpack::InputNonVRDrop() {
}

void ATWDBackpack::InputNonVRCancel() {
}

void ATWDBackpack::InputNonVRBackpackButton() {
}

bool ATWDBackpack::HasUIMesh() const {
    return false;
}

void ATWDBackpack::GoToPrevPage() {
}

void ATWDBackpack::GoToPage(int32 PageIndex) {
}

void ATWDBackpack::GoToNextPage() {
}

FLinearColor ATWDBackpack::GetUIMeshElementColor(int32 MeshElementIndex) const {
    return FLinearColor{};
}

ATWDPlayerInventorySlot* ATWDBackpack::GetQuickSlot() const {
    return NULL;
}

UTWDNonVRBackpackWidget* ATWDBackpack::GetNonVRBackpackWidget() {
    return NULL;
}

ATWDPlayerInventorySlot* ATWDBackpack::GetInventorySlotByIdx(uint8 slotIdx) const {
    return NULL;
}

TArray<ASDIInventoryActor*> ATWDBackpack::GetBackpackInventoryActors() const {
    return TArray<ASDIInventoryActor*>();
}

ASDIInventorySlot* ATWDBackpack::FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage) {
    return NULL;
}

bool ATWDBackpack::AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace, bool bDisableGotoPage) {
    return false;
}

void ATWDBackpack::ActivateNonVRInteraction() {
}

ATWDBackpack::ATWDBackpack() {
    this->BackpackMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackpackMeshComponent"));
    this->UIMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UIMeshComponent"));
    this->SlotCollisionRadius = 5.00f;
    this->bDuringGrabAction = false;
    this->bIsGrabDelayed = false;
    this->bDelayOldRepInsideInventory = false;
    this->AudioBagOpen = NULL;
    this->AudioBagClose = NULL;
    this->AudioItemRemove = NULL;
    this->AudioItemPlace = NULL;
    this->AudioItemRemoveSpecial = NULL;
    this->AudioItemPlaceSpecial = NULL;
    this->AvailablePages = 3;
    this->ActivePageIndex = 0;
    this->NextPageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("NextPageCollision"));
    this->PrevPageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PrevPageCollision"));
    this->PointGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PointGripLeft"));
    this->PointGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PointGripRight"));
    this->QuickSlotComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("QuickSlotComponent"));
    this->InventorySlotBlueprint = NULL;
    this->SpecialInventorySlotBlueprint = NULL;
    this->NonVRBackpackWidgetClass = NULL;
    this->InventorySlotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("InventorySlotRoot"));
    this->UIMeshMaterialInstance = NULL;
    this->LeftArrowMeshElementIndex = 14;
    this->RightArrowMeshElementIndex = 15;
    this->bNonVRInputActive = false;
    this->ActiveNonVRSlotIndex = 11;
    this->PrevNonVRSlotIndex = 11;
    this->QuickInventorySlot = NULL;
    this->bInsideOnRep_bRepInsideInventory = false;
    this->NonVRBackpackWidget = NULL;
}

