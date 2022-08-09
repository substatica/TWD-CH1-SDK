#include "TWDResponse.h"

FTWDResponse::FTWDResponse() {
    this->bIgnoreBarkCooldown = false;
    this->bRespondOnce = false;
    this->BarkCooldownType = EBarkCooldownType::None;
}

