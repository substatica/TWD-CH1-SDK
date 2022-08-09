#include "TWDWaypointPatrolComponent.h"

class AActor;
class ATWDWaypoint;
class ATWDWaypointPath;

bool UTWDWaypointPatrolComponent::WasEventSeenForActor(AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const {
    return false;
}

bool UTWDWaypointPatrolComponent::WasEventSeen(ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const {
    return false;
}

void UTWDWaypointPatrolComponent::SetWaypointPath(ATWDWaypointPath* NewWaypointPath) {
}

void UTWDWaypointPatrolComponent::SetCurrentWaypointIndex(int32 Index) {
}

void UTWDWaypointPatrolComponent::ResetHistory() {
}

void UTWDWaypointPatrolComponent::RecordEvent(AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) {
}

FVector UTWDWaypointPatrolComponent::PrevWaypointPosition() {
    return FVector{};
}

FVector UTWDWaypointPatrolComponent::NextWaypointPosition() {
    return FVector{};
}

bool UTWDWaypointPatrolComponent::HasWaypointPath() const {
    return false;
}

bool UTWDWaypointPatrolComponent::HasCurrentWaypoint() const {
    return false;
}

FTWDWaypointSettings UTWDWaypointPatrolComponent::GetWaypointSettingsAtIndex(int32 Index) const {
    return FTWDWaypointSettings{};
}

ATWDWaypointPath* UTWDWaypointPatrolComponent::GetWaypointPath() const {
    return NULL;
}

FVector UTWDWaypointPatrolComponent::GetCurrentWaypointPosition() const {
    return FVector{};
}

int32 UTWDWaypointPatrolComponent::GetCurrentWaypointIndex() const {
    return 0;
}

ATWDWaypoint* UTWDWaypointPatrolComponent::GetCurrentWaypoint() const {
    return NULL;
}

ETWDWaypointTriggerAction UTWDWaypointPatrolComponent::GetCurrentTriggerAction() const {
    return ETWDWaypointTriggerAction::None;
}

void UTWDWaypointPatrolComponent::ClearWaypointPath() {
}

void UTWDWaypointPatrolComponent::ClearWaypointHistory(ATWDWaypoint* Waypoint) {
}

UTWDWaypointPatrolComponent::UTWDWaypointPatrolComponent() {
    this->LastIndexChange = 0;
    this->WaypointPath = NULL;
}

