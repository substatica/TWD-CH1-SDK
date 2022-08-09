#include "CoverPoint.h"

UCoverPoint::UCoverPoint() {
    this->bLeftCoverStanding = false;
    this->bRightCoverStanding = false;
    this->bLeftCoverCrouched = false;
    this->bRightCoverCrouched = false;
    this->bFrontCoverCrouched = false;
    this->bCrouchedCover = false;
    this->OccupiedBy = NULL;
}

