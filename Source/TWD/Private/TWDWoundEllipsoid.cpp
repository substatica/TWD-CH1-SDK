#include "TWDWoundEllipsoid.h"

FTWDWoundEllipsoid::FTWDWoundEllipsoid() {
    this->MaxDent = 0.00f;
    this->Tile = 0;
    this->WoundType = EWoundType::None;
    this->bProtected = false;
    this->bShowLimb = false;
    this->bDoSever = false;
    this->WoundID = 0;
    this->WoundTimestamp = 0.00f;
}

