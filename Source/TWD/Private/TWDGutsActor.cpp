#include "TWDGutsActor.h"


float ATWDGutsActor::GetSwipeProgress() const {
    return 0.0f;
}

ATWDGutsActor::ATWDGutsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwipeAccumulator = 0.00f;
    this->SwipeDelta = 0.00f;
    this->SwipeAmountRequired = 500.00f;
    this->CameraTargetRadius = 25.00f;
    this->ArmTargetRadius = 15.00f;
    this->bShowDebugData = false;
    this->bIsApplying = false;
}

