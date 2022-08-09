#include "TWDGameMode.h"
#include "Templates/SubclassOf.h"

class ATWDAIController;
class UTWDAIManager;
class AController;
class UDamageType;
class ATWDCharacter;
class AActor;
class UTWDAnimIdManager;

void ATWDGameMode::StartBells_Implementation() {
}

void ATWDGameMode::SetMatchSubState(FName NewState) {
}

bool ATWDGameMode::RemoveQueuedExplosion(const FTWDQueuedExplosionDelegate& ExplosionDelegate) {
    return false;
}

void ATWDGameMode::QueueExplosion(AController* EventInstigator, const FTWDQueuedExplosionDelegate& ExplosionDelegate) {
}

void ATWDGameMode::ProcessQueuedRagdolls() {
}

void ATWDGameMode::ProcessQueuedExplosions() {
}

void ATWDGameMode::OnMatchSubStateSet_Implementation() {
}

void ATWDGameMode::OnCharacterDeath_Implementation(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser) {
}

bool ATWDGameMode::IsNotebookEnabled() const {
    return false;
}

bool ATWDGameMode::IsExplosionQueued(const FTWDQueuedExplosionDelegate& ExplosionDelegate) {
    return false;
}

void ATWDGameMode::InitializeAIByGameMode_Implementation(ATWDAIController* AIController) {
}

UTWDAnimIdManager* ATWDGameMode::GetAnimIdManager() {
    return NULL;
}

UTWDAIManager* ATWDGameMode::GetAIManager() {
    return NULL;
}

ATWDGameMode::ATWDGameMode() {
    this->bProcessingQueuedExplosions = false;
    this->AIManagerClass = NULL;
    this->bEnableSleepingAISystem = false;
    this->GameDirectorBlueprint = NULL;
    this->bNotebookEnabled = false;
    this->GameDirector = NULL;
    this->AIManager = NULL;
    this->AnimIdManager = NULL;
}

