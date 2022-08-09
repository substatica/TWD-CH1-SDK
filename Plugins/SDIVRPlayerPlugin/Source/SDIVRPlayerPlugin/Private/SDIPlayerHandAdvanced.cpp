#include "SDIPlayerHandAdvanced.h"

class UActorComponent;

bool ASDIPlayerHandAdvanced::WorldGripPossible() const {
    return false;
}

bool ASDIPlayerHandAdvanced::ComputeSurfaceGrip(const FHitResult& Hit, UActorComponent*& GripComp, FTransform& OutTransform, ESDIHandPose& OutPose, float& OutClench, FSDIGripInfo& OutGripInfo) const {
    return false;
}

bool ASDIPlayerHandAdvanced::ClimbGripPossible() const {
    return false;
}

ASDIPlayerHandAdvanced::ASDIPlayerHandAdvanced() {
    this->GrabSurfaceFeedback = NULL;
    this->GrabClimbableSurfaceFeedback = NULL;
    this->TouchSurfaceFeedback = NULL;
    this->TouchClimbableSurfaceFeedback = NULL;
    this->GripSurfacePose = ESDIHandPose::HP_Surface_Clench;
    this->GripClimbableSurfacePose = ESDIHandPose::HP_Surface_Clench;
    this->GripSafetyInflation = 4.00f;
    this->ClimbingGripSafetyTimeBeforePress = 0.10f;
    this->ClimbingGripSafetyTimeAfterPress = 0.10f;
    this->GrabAndPullGripSafetyTimeBeforePress = 0.10f;
    this->GrabAndPullGripSafetyTimeAfterPress = 0.10f;
    this->SurfaceClenchFingerTraceDistance = 16.00f;
    this->SurfaceClenchDownDistance = 8.00f;
    this->SurfaceClenchDownHitClenchMinCollisionTime = 0.50f;
    this->ClimbingTraceChannel = ECC_WorldStatic;
    this->LastValidWorldTouchTimestamp = 0.00f;
    this->LastValidWorldClimbableTouchTimestamp = 0.00f;
}

