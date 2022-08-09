#include "TWDSerializedTask.h"

FTWDSerializedTask::FTWDSerializedTask() {
    this->TaskClass = NULL;
    this->CurrentStatusIcon = ETWDTaskStatusIcon::New;
    this->LastUpdatedTime = 0.00f;
}

