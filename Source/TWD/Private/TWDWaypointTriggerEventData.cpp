#include "TWDWaypointTriggerEventData.h"

FTWDWaypointTriggerEventData::FTWDWaypointTriggerEventData() {
    this->Waypoint = NULL;
    this->FilterType = ETWDWaypointFilterType::Any;
    this->Event = ETWDWaypointTriggerEvent::Arrive;
}

