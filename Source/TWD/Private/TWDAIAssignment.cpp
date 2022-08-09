#include "TWDAIAssignment.h"

class AActor;
class ATWDAIController;
class ATWDCharacter;

void UTWDAIAssignment::Tick_Implementation(float DeltaTime) {
}

bool UTWDAIAssignment::ShouldAssignedMoveBark_Implementation() const {
    return false;
}

bool UTWDAIAssignment::ShouldAssignedMove_Implementation() const {
    return false;
}

void UTWDAIAssignment::SetAssigner(AActor* NewAssigner) {
}

void UTWDAIAssignment::SetAssignee(ATWDAIController* Controller) {
}

bool UTWDAIAssignment::IsAssignedTargetConsideredHostile_Implementation() const {
    return false;
}

AActor* UTWDAIAssignment::GetAssigner() const {
    return NULL;
}

ATWDAIController* UTWDAIAssignment::GetAssignee() const {
    return NULL;
}

ATWDCharacter* UTWDAIAssignment::GetAssignedTarget_Implementation() const {
    return NULL;
}


EAIBaseGroundMovementSpeedType UTWDAIAssignment::GetAssignedMoveSpeedType_Implementation() const {
    return EAIBaseGroundMovementSpeedType::Walk;
}

void UTWDAIAssignment::EndAssignment_Implementation() {
}

void UTWDAIAssignment::BeginAssignment_Implementation() {
}

TArray<FActorStimData> UTWDAIAssignment::AddStims_Implementation(const TArray<FActorStimData>& StimsIn) {
    return TArray<FActorStimData>();
}

UTWDAIAssignment::UTWDAIAssignment() {
    this->Category = EAssignmentCategory::Navigation;
    this->Priority = EAssignmentPriority::Design;
    this->Duration = 0.00f;
    this->Assignee = NULL;
    this->Assigner = NULL;
    this->TimeElapsed = 0.00f;
}

