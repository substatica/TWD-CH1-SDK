#include "SavedMove_SDICharacterAdvanced_MoveData.h"

FSavedMove_SDICharacterAdvanced_MoveData::FSavedMove_SDICharacterAdvanced_MoveData() {
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = eCustomMovement::CUSTOM_MOVE_None;
    this->bLeftHandClimbing = false;
    this->bRightHandClimbing = false;
    this->bMantleOver = false;
    this->bMantleRequireCrouch = false;
}

