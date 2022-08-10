#include "Engine/SpawnVFXAttachedParams.h"

FSpawnVFXAttachedParams::FSpawnVFXAttachedParams() {
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();

    this->EmitterTemplate = NULL;
    this->AttachToComponent = NULL;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->bAutoDestroy = false;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->bAutoActivateSystem = false;
}

