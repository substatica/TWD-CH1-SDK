#include "SDIReplicatedGripInfo.h"

FSDIReplicatedGripInfo::FSDIReplicatedGripInfo() {
    this->HandEnum = EControllerHand::Left;
    this->Percent = 0;
    this->Twist = 0;
    this->Swing1 = 0;
    this->Swing2 = 0;
    this->ChangeCounter = 0;
}

