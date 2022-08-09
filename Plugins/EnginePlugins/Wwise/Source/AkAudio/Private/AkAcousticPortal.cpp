#include "AkAcousticPortal.h"

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}

AAkAcousticPortal::AAkAcousticPortal() {
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionRefreshIntervalMin = 0.10f;
    this->ObstructionRefreshIntervalMax = 4.00f;
    this->ObstructionRefreshIntervalMinDis = 500.00f;
    this->ObstructionRefreshIntervalMaxDis = 3000.00f;
    this->ObstructionCollisionChannel = ECC_GameTraceChannel18;
    this->ObstructionLevel = 0.00f;
    this->FrontObstructionPow2AttenDistance = 100000.00f;
    this->BackObstructionPow2AttenDistance = 100000.00f;
    this->ClosedDoorOcclusion = 0.40f;
    this->OpenDoorOcclusion = 0.00f;
    this->ClosedDoorAttenDistance = 100.00f;
    this->OpenDoorAttenDistance = 100000.00f;
    this->OpenDoorAngle = 40.00f;
    this->MaxDistanceToDoor = 100.00f;
}

