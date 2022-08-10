#include "TWDBTT_Base.h"

class AAIController;

void OnAbort(AAIController* Controller) {
}

TEnumAsByte<EBTNodeResult::Type> OnTick(AAIController* Controller, float DeltaSeconds) {
    return EBTNodeResult::Succeeded;
}

void OnDeactivate(AAIController* Controller) {
}

TEnumAsByte<EBTNodeResult::Type> OnActivate(AAIController* Controller) {
    return EBTNodeResult::Succeeded;
}

UTWDBTT_Base::UTWDBTT_Base() {
    this->bShowPropertyDetails = true;
}

