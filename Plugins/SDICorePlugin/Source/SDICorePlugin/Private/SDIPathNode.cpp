#include "SDIPathNode.h"

FSDIPathNode::FSDIPathNode() {
    this->ID = 0;
    this->bSeqLinks = false;
    this->CurSeqCount = 0;
    this->WaitTime = 0.00f;
    this->LocomotionSpeed = EAIBaseGroundMovementSpeedType::Walk;
}

