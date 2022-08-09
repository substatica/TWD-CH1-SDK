#include "TWDCorpseManager.h"
#include "Templates/SubclassOf.h"

class ATWDCharacter;
class UTWDCharacterArchetype;

void ATWDCorpseManager::SetDeathPoolTransform(FTransform Transform) {
}

bool ATWDCorpseManager::IsCharacterInDeathPool(ATWDCharacter* Character) const {
    return false;
}

void ATWDCorpseManager::AddCharacterToDeathPool(ATWDCharacter* Character) {
}

ATWDCharacter* ATWDCorpseManager::AcquireCharacterFromDeathPool(TSubclassOf<ATWDCharacter> CharacterClass, TSubclassOf<UTWDCharacterArchetype> ArchetypeClass, FTransform Transform) {
    return NULL;
}

ATWDCorpseManager::ATWDCorpseManager() {
    this->CorpseCleanupDesiredSpawnWalkerDelay = 10.00f;
    this->CorpseCleanupSpawnWalkerOffscreenTime = 10.00f;
    this->LowPerfTime = 0.00f;
}

