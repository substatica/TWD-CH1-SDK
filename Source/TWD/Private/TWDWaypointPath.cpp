#include "TWDWaypointPath.h"
#include "Components/SplineComponent.h"

class ATWDWaypoint;
class AActor;



FTWDWaypointSettings ATWDWaypointPath::GetWaypointSettingsAtIndex(int32 Index) const {
    return FTWDWaypointSettings{};
}

int32 ATWDWaypointPath::GetWaypointIndex(ATWDWaypoint* Waypoint) const {
    return 0;
}

ATWDWaypoint* ATWDWaypointPath::GetWaypointAtIndex(int32 Index) const {
    return NULL;
}

bool ATWDWaypointPath::CanActorSendWaypointEvent_Implementation(const AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const {
    return false;
}

ATWDWaypointPath::ATWDWaypointPath() {
    this->bIsLooping = false;
    this->bShowDebugWapointConnections = false;
    this->EditorPathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Path"));
}

