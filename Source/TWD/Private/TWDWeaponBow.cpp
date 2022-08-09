#include "TWDWeaponBow.h"
#include "Templates/SubclassOf.h"

class ATWDAmmoProp;
class ASDIInventoryActor;

bool ATWDWeaponBow::ShouldUseArrowProps() const {
    return false;
}

TSubclassOf<ASDIInventoryActor> ATWDWeaponBow::GetArrowPropCurrencyClass() const {
    return NULL;
}

TSubclassOf<ATWDAmmoProp> ATWDWeaponBow::GetArrowPropClass() const {
    return NULL;
}

ATWDWeaponBow::ATWDWeaponBow() {
    this->ArrowPropClass = NULL;
    this->bUseArrowProps = false;
}

