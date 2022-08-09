#include "SDICoreUtilityAIState.h"

class AController;
class AActor;
class USDICoreUtilityAI;
class ACharacter;
class USDICoreUtilityAIState;
class AHUD;
class UCanvas;

bool USDICoreUtilityAIState::UpdateMovement_Implementation(float DeltaSeconds) {
    return false;
}

bool USDICoreUtilityAIState::UpdateAiming_Implementation(float DeltaSeconds, float& inOutAimSpringK, float& inOutAimSpringDamp, float& inOutAimSpringMaxVel, bool& inOutbAllowOvershoot) {
    return false;
}

bool USDICoreUtilityAIState::UpdateActions_Implementation(float DeltaSeconds) {
    return false;
}

float USDICoreUtilityAIState::TimeSinceDeactivation() const {
    return 0.0f;
}

float USDICoreUtilityAIState::TimeSinceActivation() const {
    return 0.0f;
}

void USDICoreUtilityAIState::TickState_Implementation(float DeltaSeconds) {
}

void USDICoreUtilityAIState::SetTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority) {
}

void USDICoreUtilityAIState::SetSecondaryTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority) {
}

bool USDICoreUtilityAIState::IsActiveState() const {
    return false;
}

void USDICoreUtilityAIState::InitState_Implementation() {
}

bool USDICoreUtilityAIState::GetUtilityAIAndChar(USDICoreUtilityAI*& UtilityAI, ACharacter*& Char) const {
    return false;
}

USDICoreUtilityAI* USDICoreUtilityAIState::GetUtilityAI() const {
    return NULL;
}

float USDICoreUtilityAIState::GetTargetPriority_Implementation(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex) {
    return 0.0f;
}

float USDICoreUtilityAIState::GetServerTimestamp() const {
    return 0.0f;
}

float USDICoreUtilityAIState::GetSecondaryTargetPriority_Implementation(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex) {
    return 0.0f;
}

float USDICoreUtilityAIState::GetPriority() const {
    return 0.0f;
}

ESDIUtilityAIDifficulty USDICoreUtilityAIState::GetDifficulty() const {
    return ESDIUtilityAIDifficulty::Easy;
}

AController* USDICoreUtilityAIState::GetController() const {
    return NULL;
}

ACharacter* USDICoreUtilityAIState::GetChar() const {
    return NULL;
}

USDICoreUtilityAIState* USDICoreUtilityAIState::GetActiveState() const {
    return NULL;
}

void USDICoreUtilityAIState::ExitState_Implementation(USDICoreUtilityAIState* NewState) {
}

void USDICoreUtilityAIState::EnterState_Implementation(USDICoreUtilityAIState* PrevState) {
}

float USDICoreUtilityAIState::DrawHUD_Implementation(FVector2D Pos, AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize) {
    return 0.0f;
}

void USDICoreUtilityAIState::DifficultyUpdated_Implementation(ESDIUtilityAIDifficulty NewDifficulty) {
}

void USDICoreUtilityAIState::DestroyState_Implementation() {
}

void USDICoreUtilityAIState::ComputePriority_Implementation(float DeltaSeconds) {
}

float USDICoreUtilityAIState::ActiveTime() const {
    return 0.0f;
}

USDICoreUtilityAIState::USDICoreUtilityAIState() {
    this->bUsesTarget = false;
    this->bUsesSecondaryTarget = false;
    this->PlayerTargetPriorityModifier = 1.00f;
    this->AITargetPriorityModifier = 1.00f;
    this->Priority = -1.00f;
    this->EnterStateTimestamp = -1.00f;
    this->ExitStateTimestamp = -1.00f;
}

