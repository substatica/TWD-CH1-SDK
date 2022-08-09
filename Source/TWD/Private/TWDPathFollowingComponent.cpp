#include "TWDPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

class UNavigationQueryFilter;

void UTWDPathFollowingComponent::SetSlowdownAtGoalBlueprint(bool bDoSlowDown) {
}

bool UTWDPathFollowingComponent::GetSlowdownAtGoal() const {
    return false;
}

float UTWDPathFollowingComponent::CalculatePathComplexity(FVector StartingLocation, FVector EndingLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, float MaxDistanceRatio, float MaxHeightDifference) const {
    return 0.0f;
}

UTWDPathFollowingComponent::UTWDPathFollowingComponent() {
}

