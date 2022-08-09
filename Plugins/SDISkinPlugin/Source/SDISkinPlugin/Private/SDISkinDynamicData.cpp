#include "SDISkinDynamicData.h"

FSDISkinDynamicData::FSDISkinDynamicData() {
    this->DefaultSkin = NULL;
    this->bAsyncLoadSkin = false;
    this->bMergeSkeletalMeshes = false;
    this->bForcePhysicsStateRecreation = false;
    this->AsyncLoadPriority = 0;
    this->bInitializingSkinReplicationData = false;
    this->bUsingFallbackMesh = false;
}

