#include "SDICurvedWedgeGeometry.h"

FSDICurvedWedgeGeometry::FSDICurvedWedgeGeometry() {
    this->bFlattenWedge = false;
    this->bUseAngleDegCurve = false;
    this->BoundingShapeStep = 0.00f;
    this->bIsDirty = false;
}

