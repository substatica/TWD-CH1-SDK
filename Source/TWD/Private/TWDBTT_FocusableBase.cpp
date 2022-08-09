#include "TWDBTT_FocusableBase.h"

class AAIController;

void UTWDBTT_FocusableBase::SetFocusToTarget(AAIController* Controller, const FString& CallerLogMsg) {
}

void UTWDBTT_FocusableBase::RestoreFocus(AAIController* Controller) {
}

UTWDBTT_FocusableBase::UTWDBTT_FocusableBase() {
    this->ActivateAction = ETWDFocusAction::Set;
    this->DeactivateAction = ETWDFocusAction::Restore;
    this->RestoreFocusActor = NULL;
}

