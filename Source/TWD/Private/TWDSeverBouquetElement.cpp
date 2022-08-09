#include "TWDSeverBouquetElement.h"

FTWDSeverBouquetElement::FTWDSeverBouquetElement() {
    this->bEnabled = false;
    this->bUseBoneSpacePrimarySeverAxis = false;
    this->BoneSpacePrimarySeverAxis = ESDIAxis::Any;
    this->ActorClass = NULL;
    this->bAlignToSeverDirection = false;
    this->bAnchored = false;
    this->bEnablePhysics = false;
    this->bUseAttachActor = false;
    this->AttachActor = ESeverBouquetAttachActor::Source;
    this->bDeferUntilSplayComplete = false;
    this->bShowDebugInfo = false;
}

