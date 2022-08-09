#include "SDIWeaponFirearmAmmo.h"
#include "Templates/SubclassOf.h"

class ASDIInventoryActor;

bool ASDIWeaponFirearmAmmo::HasInfiniteCurrency() const {
    return false;
}

TSubclassOf<ASDIInventoryActor> ASDIWeaponFirearmAmmo::GetCurrencyClass() const {
    return NULL;
}

ASDIInventoryActor* ASDIWeaponFirearmAmmo::GetCurrency_Implementation() const {
    return NULL;
}

int32 ASDIWeaponFirearmAmmo::GetCost_Implementation() const {
    return 0;
}

int32 ASDIWeaponFirearmAmmo::Fire_Implementation(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform) {
    return 0;
}

FTransform ASDIWeaponFirearmAmmo::ApplySpread_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, float AdditionalSpread) {
    return FTransform{};
}

ASDIWeaponFirearmAmmo::ASDIWeaponFirearmAmmo() {
    this->CurrencyClass = NULL;
    this->bNonPlayerHasInfiniteCurrency = true;
    this->Cost = 1;
    this->NumPellets = 1;
    this->SpreadDegrees = 0.00f;
}

