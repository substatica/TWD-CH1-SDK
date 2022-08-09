#include "TWDWorldEvent.h"

bool UTWDWorldEvent::IsNightEvent() const {
    return false;
}

TArray<FName> UTWDWorldEvent::GetProhibitedTags() const {
    return TArray<FName>();
}

TArray<FName> UTWDWorldEvent::GetIdentifyingTags() const {
    return TArray<FName>();
}

bool UTWDWorldEvent::CheckIfPendingCompletion() {
    return false;
}

UTWDWorldEvent::UTWDWorldEvent() {
    this->MapAssociated = EMapTerritoryNodeType::None;
    this->EventType = ETWDWorldEventType::WE_None;
    this->bHasDuration = false;
    this->MaxDuration = 3;
    this->CurrentDuration = 1;
    this->bPendingNotification = false;
    this->bAutoComplete = true;
    this->bEventComplete = false;
    this->bAdvancesStory = false;
}

