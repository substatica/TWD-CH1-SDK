#include "SDICoreUtilityAIStateFollowPath.h"

class USDICoreUtilityAIStateFollowPath;
class ASDIPath;

bool USDICoreUtilityAIStateFollowPath::UpdatePathLocation_Implementation(float DeltaSeconds) {
    return false;
}

bool USDICoreUtilityAIStateFollowPath::TransferPathTo_Implementation(USDICoreUtilityAIStateFollowPath* NewState) {
    return false;
}

int32 USDICoreUtilityAIStateFollowPath::GetNextPathId_Implementation(ASDIPath* Path, int32 ID, int32 PreviousId) {
    return 0;
}

ASDIPath* USDICoreUtilityAIStateFollowPath::FindNewPath_Implementation(int32& OutClosestId) {
    return NULL;
}

void USDICoreUtilityAIStateFollowPath::ClearPath_Implementation() {
}

USDICoreUtilityAIStateFollowPath::USDICoreUtilityAIStateFollowPath() {
    this->StartPathId = -1;
    this->bLooping = true;
    this->ChosenPath = NULL;
    this->LastPathId = -1;
    this->CurrentPathId = -1;
    this->CurrentPathLocRetries = 0;
}

