#include "TWDBTS_SuspiciousService.h"

bool UTWDBTS_SuspiciousService::UpdateTarget_Implementation() {
    return false;
}

ETWDSuspiciousStates UTWDBTS_SuspiciousService::GetSuspicionStateKey_Implementation() {
    return ETWDSuspiciousStates::Oblivious;
}

UTWDBTS_SuspiciousService::UTWDBTS_SuspiciousService() {
    this->SuspicionStateOrder.AddDefaulted(5);
    this->AIController = NULL;
}

