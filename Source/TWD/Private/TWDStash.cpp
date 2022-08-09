#include "TWDStash.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class AActor;
class ATWDPlayerInventorySlot;
class ASDIInventoryActor;
class ASDIInventorySlot;

void ATWDStash::SaveStashToProgression() {
}

void ATWDStash::SalvageItem(AActor* Item) {
}

void ATWDStash::OnStashContentChanged_Implementation() {
}


void ATWDStash::OnPageFlip_Implementation(int32 PrevPageIndex, int32 CurrentPageIndex) {
}

void ATWDStash::OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory) {
}

void ATWDStash::LoadStashFromProgression() {
}

void ATWDStash::InitStolenStashSequence() {
}

void ATWDStash::GoToPrevPage() {
}

void ATWDStash::GoToPage(int32 PageIndex) {
}

void ATWDStash::GoToNextPage() {
}

ATWDPlayerInventorySlot* ATWDStash::GetInventorySlotByIdx(uint8 slotIdx) const {
    return NULL;
}

TArray<ATWDPlayerInventorySlot*> ATWDStash::GetAllStashInventory() const {
    return TArray<ATWDPlayerInventorySlot*>();
}

ASDIInventorySlot* ATWDStash::FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage) {
    return NULL;
}

bool ATWDStash::CanSalvage(const AActor* Item) const {
    return false;
}

bool ATWDStash::AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace) {
    return false;
}

ATWDStash::ATWDStash() {
    this->InventorySlotBlueprint = NULL;
    this->InventorySlotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("InventorySlotRoot"));
    this->InventorySlotRadius = 5.00f;
    this->ActivePageIndex = 0;
    this->AvailablePages = 2;
    this->NextPageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("NextPageCollision"));
    this->PrevPageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PrevPageCollision"));
    this->InventoryWallRoot = CreateDefaultSubobject<USceneComponent>(TEXT("InventoryWallRoot"));
}

