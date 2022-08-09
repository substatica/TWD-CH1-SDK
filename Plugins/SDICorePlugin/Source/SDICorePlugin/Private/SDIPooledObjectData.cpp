#include "SDIPooledObjectData.h"

FSDIPooledObjectData::FSDIPooledObjectData() {
    this->Pool = NULL;
    this->bInsidePool = false;
    this->AcquiredTimestamp = 0.00f;
}

