#include "TWDBTT_SimpleWalkerMoveTo.h"

void UTWDBTT_SimpleWalkerMoveTo::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

UTWDBTT_SimpleWalkerMoveTo::UTWDBTT_SimpleWalkerMoveTo() {
    this->AcceptanceRadius = 5.00f;
    this->bStopOnOverlap = true;
    this->bUsePathfinding = true;
    this->bProjectDestinationToNavigation = true;
    this->bCanStrafe = false;
    this->bStopMovementOnAbort = false;
}

