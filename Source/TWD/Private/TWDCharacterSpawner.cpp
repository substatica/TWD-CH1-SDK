#include "TWDCharacterSpawner.h"
#include "Templates/SubclassOf.h"

class UDamageType;
class ATWDCharacter;
class AActor;

void ATWDCharacterSpawner::StartSpawner_Implementation() {
}

void ATWDCharacterSpawner::SpawnSingle_Implementation() {
}

void ATWDCharacterSpawner::OnCharacterDied(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser) {
}

ATWDCharacterSpawner::ATWDCharacterSpawner() {
    this->CharacterBlueprint = NULL;
}

