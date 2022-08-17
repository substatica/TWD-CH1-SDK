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

ATWDDismemberDroppedLimbAdvanced::ATWDDismemberDroppedLimbAdvanced(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeveredTorsoExtremityMask = 0;
    this->bShowAdvancedWoundDebugInfo = false;
}

