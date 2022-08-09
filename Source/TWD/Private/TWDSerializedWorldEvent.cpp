#include "TWDSerializedWorldEvent.h"

FTWDSerializedWorldEvent::FTWDSerializedWorldEvent() {
    this->WorldEventClass = NULL;
    this->CurrentDuration = 0;
    this->bPendingNotification = false;
}

