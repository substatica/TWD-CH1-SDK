#include "TWDDismemberDroppedLimbAdvanced.h"

class ATWDCharacter;

void ATWDDismemberDroppedLimbAdvanced::SpawnDeferredSeverBouquetElements(ATWDCharacter* SourceCharacter) {
}

void ATWDDismemberDroppedLimbAdvanced::SetShowAdvancedWoundDebugInfo(bool bShow) {
}

void ATWDDismemberDroppedLimbAdvanced::EndSplay(ATWDCharacter* SourceCharacter) {
}

void ATWDDismemberDroppedLimbAdvanced::DeferSeverBouquetElement(FSpawnableBouquetElement& E) {
}

ATWDDismemberDroppedLimbAdvanced::ATWDDismemberDroppedLimbAdvanced() {
    this->SeveredTorsoExtremityMask = 0;
    this->bShowAdvancedWoundDebugInfo = false;
}

