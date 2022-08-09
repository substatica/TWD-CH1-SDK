#include "TWDAIManager.h"
#include "Templates/SubclassOf.h"

class AActor;
class ATWDWalkerAICharacter;
class UDamageType;
class ATWDCharacter;
class ATWDAICharacter;

void UTWDAIManager::ToggleGPSortOrder() {
}

void UTWDAIManager::SetMenaceClamp(float Min, float Max) {
}

void UTWDAIManager::SetMaxGPDisplay(int32 Num) {
}

void UTWDAIManager::SetGPSortSubject(EGlobalPerceptionSortSubject SortSubject) {
}

void UTWDAIManager::SetGPSortOrder(EGlobalPerceptionSortOrder SortOrder) {
}

void UTWDAIManager::PauseMenace(bool bPause) {
}

bool UTWDAIManager::OnWalkerLostGenericTarget(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target) {
    return false;
}

bool UTWDAIManager::OnWalkerFoundGenericTarget(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target) {
    return false;
}

void UTWDAIManager::OnAIDestroyed(AActor* CharacterActor) {
}

void UTWDAIManager::OnAIDeath(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser) {
}

bool UTWDAIManager::IsPauseMenace() {
    return false;
}

bool UTWDAIManager::GetMenaceLocation(const ATWDAICharacter* Character, FVector& MenaceLocation) {
    return false;
}

float UTWDAIManager::GetMenace() {
    return 0.0f;
}

float UTWDAIManager::GetGrappleScore_Implementation(ATWDWalkerAICharacter* Attacker, ATWDCharacter* Target, ETWDCharacterGrappleLocation GrappleLocation, bool bCheckLocationIsOnNavMesh, float FarthestDistance) {
    return 0.0f;
}

bool UTWDAIManager::GetDisplayGlobalPerception() const {
    return false;
}

void UTWDAIManager::EnableDisplayDebugGlobalPerception(bool bEnable) {
}

bool UTWDAIManager::DoesTargetHaveAttackers(ATWDCharacter* Target) {
    return false;
}

void UTWDAIManager::AddPerceptionDesc(AActor* AIActor, AActor* StimActor, bool bIsSound, FActorStimData Data) {
}

UTWDAIManager::UTWDAIManager() {
    this->AICharacterMovement_CurrentIndex = -1;
    this->AICharacterMovementProjectNavMesh_CurrentIndex = -1;
    this->PlayerGrappleLockDistance = 65.00f;
    this->NonVRPlayerWalkerDistScoreOnlyRadius = 0.00f;
    this->NonVRPlayerWalkerAngleCutoff = 60.00f;
    this->NonVRPlayerWalkerFacingWeight = 100.00f;
    this->NonVRPlayerWalkerNormalDistWeight = 2.00f;
    this->NonVRPlayerWalkerCloseDistWeight = 200.00f;
    this->InitialRingCount = 3;
    this->SpaceBetweenRings = 100.00f;
    this->SpaceBetweenSlots = 32.00f;
    this->SlotAngleShift = 0.00f;
    this->SlotRadius = 30.00f;
    this->AttackAngleThickness = 90.00f;
    this->RingEvalTime = 0.20f;
    this->RingEvalDistance = 50.00f;
    this->AIRingHeightExtent = 300.00f;
    this->AIOptimizationCycleNum = 4;
    this->MinGroundTimePenetration = 0.12f;
    this->bDebugDraw = false;
    this->bDebugDisplayGlobalPerception = false;
    this->MaxDisplayGlobalPerception = 10;
    this->GPSortSubject = EGlobalPerceptionSortSubject::Alpha;
    this->GPSortOrder = EGlobalPerceptionSortOrder::Ascending;
    this->VsNPCGrappleStartLocation = ETWDCharacterGrappleLocation::Front;
    this->VsNPCGrappleEndLocation = ETWDCharacterGrappleLocation::Back;
    this->Menace = 0.00f;
    this->bPauseMenace = false;
    this->MenaceLOSModifier = 1.00f;
    this->MenaceKeySelectorName = TEXT("Menace");
    this->MenaceRateKeySelectorName = TEXT("MenaceRate");
    this->bWaveModeBehavior = false;
}

