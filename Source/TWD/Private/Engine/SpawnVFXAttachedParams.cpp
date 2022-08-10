#include "SpawnVFXAttachedParams.h"

FSpawnVFXAttachedParams::FSpawnVFXAttachedParams() {
    this->EmitterTemplate = NULL;
    this->AttachToComponent = NULL;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->bAutoDestroy = false;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->bAutoActivateSystem = false;
}

