#include "TWDHandItemState.h"

FTWDHandItemState::FTWDHandItemState() {
    this->PrevItem = NULL;
    this->Item = NULL;
    this->PrevItemClass = NULL;
    this->ItemClass = NULL;
    this->bDestroyed = false;
    this->bConsume = false;
    this->bAimingThrow = false;
    this->bDesiredAttack = false;
    this->bAttack = false;
    this->DesiredGunAction = ETWDGunAction::Any;
    this->GunAction = ETWDGunAction::Any;
    this->GunReloadRounds = 0;
    this->GunChamberedRounds = 0;
    this->bDesiredEquipmentAction = false;
    this->bEquipmentAction = false;
}

