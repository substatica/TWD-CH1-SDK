#include "TWDBTT_Base.h"

class AAIController;

TEnumAsByte<EBTNodeResult::Type> UTWDBTT_Base::OnTick_Implementation(AAIController* Controller, float DeltaSeconds) {
    return EBTNodeResult::Succeeded;
}

void UTWDBTT_Base::OnDeactivate_Implementation(AAIController* Controller) {
}

TEnumAsByte<EBTNodeResult::Type> UTWDBTT_Base::OnActivate_Implementation(AAIController* Controller) {
    return EBTNodeResult::Succeeded;
}

void UTWDBTT_Base::OnAbort_Implementation(AAIController* Controller) {
}

UTWDBTT_Base::UTWDBTT_Base() {
    this->bShowPropertyDetails = true;
}

