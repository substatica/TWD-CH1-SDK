#include "SDICoreUtilityAIController.h"

class UBehaviorTree;
class USDICoreUtilityAI;
class ACharacter;
class UBlackboardComponent;

bool ASDICoreUtilityAIController::UtilityAIEnabled() const {
    return false;
}

void ASDICoreUtilityAIController::UpdateUtilityAI() {
}

bool ASDICoreUtilityAIController::StopBehaviorTree(UBehaviorTree* BTAsset) {
    return false;
}

void ASDICoreUtilityAIController::SetUtilityAIEnabled(bool bEnabled) {
}

void ASDICoreUtilityAIController::SetDifficulty(ESDIUtilityAIDifficulty NewDifficulty) {
}

void ASDICoreUtilityAIController::SetAIName(const FString& AIName) {
}

bool ASDICoreUtilityAIController::IsUsingUtilityAI() const {
    return false;
}

USDICoreUtilityAI* ASDICoreUtilityAIController::GetUtilityAI() const {
    return NULL;
}

float ASDICoreUtilityAIController::GetServerTimestamp() const {
    return 0.0f;
}

ESDIUtilityAIDifficulty ASDICoreUtilityAIController::GetDifficulty() const {
    return ESDIUtilityAIDifficulty::Easy;
}

ACharacter* ASDICoreUtilityAIController::GetChar() const {
    return NULL;
}

UBlackboardComponent* ASDICoreUtilityAIController::GetBlackboard() const {
    return NULL;
}

ASDICoreUtilityAIController::ASDICoreUtilityAIController() {
    this->UtilityAIClass = NULL;
    this->bUtilityAIEnabled = true;
    this->Difficulty = ESDIUtilityAIDifficulty::Medium;
    this->LastCharacterUtilityAIClass = NULL;
    this->UtilityAI = NULL;
}

