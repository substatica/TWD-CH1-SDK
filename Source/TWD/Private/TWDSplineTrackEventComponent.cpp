#include "TWDSplineTrackEventComponent.h"

class AActor;

void UTWDSplineTrackEventComponent::OnTriggered_Implementation(AActor* Context) {
}

float UTWDSplineTrackEventComponent::GetDistance() const {
    return 0.0f;
}

UTWDSplineTrackEventComponent::UTWDSplineTrackEventComponent() {
    this->Distance = 0.00f;
}

