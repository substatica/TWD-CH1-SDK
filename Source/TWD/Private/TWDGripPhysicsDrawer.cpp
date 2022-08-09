#include "TWDGripPhysicsDrawer.h"

class ATWDCharacter;

bool ATWDGripPhysicsDrawer::NonVROpenDrawer(ATWDCharacter* Character) {
    return false;
}

ATWDGripPhysicsDrawer::ATWDGripPhysicsDrawer() {
    this->bIsOpen = false;
    this->bNonVRDrawerAutoOpen = false;
    this->NonVROpenVelocity = 50000.00f;
}

