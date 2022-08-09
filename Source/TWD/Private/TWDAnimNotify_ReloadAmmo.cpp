#include "TWDAnimNotify_ReloadAmmo.h"

UTWDAnimNotify_ReloadAmmo::UTWDAnimNotify_ReloadAmmo() {
    this->hand = EControllerHand::Left;
    this->Socket = TEXT("handAttach_l");
    this->bGrab = true;
}

