#include "TWDAmmoPouch.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

class UObject;
class ATWDWeaponBow;
class ATWDWeaponGun;

bool ATWDAmmoPouch::WasPouchRecentlyRendered(float Tolerance) const {
    return false;
}


int32 ATWDAmmoPouch::GetArrowPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponBow* Bow) {
    return 0;
}

int32 ATWDAmmoPouch::GetAmmoPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponGun* Gun) {
    return 0;
}

ATWDAmmoPouch::ATWDAmmoPouch() {
    this->HeldGunLeft = NULL;
    this->HeldGunRight = NULL;
    this->ActiveGun = NULL;
    this->bOwnerHoldingAmmo = false;
    this->HeldBowLeft = NULL;
    this->HeldBowRight = NULL;
    this->ActiveBow = NULL;
    this->RangedGrabOverrideRadius = 10.00f;
    this->InventorySlotTickGroup = ETWDPlayerCharacterTickInventory::Count;
    this->PouchRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PouchRoot"));
    this->PouchMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PouchMesh"));
    this->SlotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SlotMesh"));
    this->SlotCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SlotCollision"));
    this->AmmoIconMatInst = NULL;
    this->AmmoInfoWidget = NULL;
    this->AmmoIconMesh = NULL;
}

