#include "TWDScenarioManager.h"
#include "Templates/SubclassOf.h"

class UTWDWorldEvent;
class UDataTable;
class UTWDSaveGame;

void UTWDScenarioManager::ValidateScenarioProgression() {
}

void UTWDScenarioManager::UnlockEventDeck(bool bImmediatelyDraw) {
}

void UTWDScenarioManager::SimulateEventDeckPercentages(int32 Days, int32 NumberSimulations, bool bLogNumberOfEvents, bool bLogNumberOfEventTypes, bool bLogActiveEventTypes) {
}

void UTWDScenarioManager::SimulateEventDeck(int32 Days, bool bLogDailyEvents, bool bLogEventDeckValues) {
}

void UTWDScenarioManager::SetEventNotificationState(UTWDWorldEvent* WorldEvent, bool bPlayerHasBeenNotified) {
}

void UTWDScenarioManager::SetEventDeckTypeEnabled(ETWDWorldEventType EventType, bool bEnabled) {
}

void UTWDScenarioManager::SetEventDeckEntryEnabled(TSubclassOf<UTWDWorldEvent> EventClass, bool bEnabled) {
}

void UTWDScenarioManager::SaveToSaveData(UTWDSaveGame* SaveGame) {
}

void UTWDScenarioManager::RemoveCompletedActiveEvents() {
}

void UTWDScenarioManager::RemoveAllActiveEvents() {
}

void UTWDScenarioManager::RemoveActiveEventByClass(TSubclassOf<UTWDWorldEvent> EventToRemove) {
}

void UTWDScenarioManager::RemoveActiveEvent(UTWDWorldEvent* EventToRemove) {
}

void UTWDScenarioManager::LoadFromSaveData(UTWDSaveGame* SaveGame) {
}

bool UTWDScenarioManager::HandleNewWorldEvent(TSubclassOf<UTWDWorldEvent> NewEventClass) {
    return false;
}

void UTWDScenarioManager::HandleNewDay() {
}

UDataTable* UTWDScenarioManager::GetScenarioCommands(EMapTerritoryNodeType MapSpecifier) const {
    return NULL;
}

float UTWDScenarioManager::GetCurrentHerdTimerMultiplier() const {
    return 0.0f;
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetConflictingEvents(const UTWDWorldEvent* TestEvent) const {
    return TArray<UTWDWorldEvent*>();
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetActiveEventsPendingNotification() const {
    return TArray<UTWDWorldEvent*>();
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetActiveEventsOfType(const ETWDWorldEventType EventType) const {
    return TArray<UTWDWorldEvent*>();
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetActiveEventsForMap(const EMapTerritoryNodeType Map, const bool bNightEvents) const {
    return TArray<UTWDWorldEvent*>();
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetActiveEventsDetailed(const EMapTerritoryNodeType Map, const ETWDWorldEventType EventType) const {
    return TArray<UTWDWorldEvent*>();
}

TArray<UTWDWorldEvent*> UTWDScenarioManager::GetActiveEvents() const {
    return TArray<UTWDWorldEvent*>();
}

UTWDWorldEvent* UTWDScenarioManager::AddActiveEventFromClass(TSubclassOf<UTWDWorldEvent> NewEvent, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd) {
    return NULL;
}

bool UTWDScenarioManager::AddActiveEvent(UTWDWorldEvent* EventClass, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd) {
    return false;
}

UTWDScenarioManager::UTWDScenarioManager() {
    this->MapManager = NULL;
    this->EventDeckContents = NULL;
    this->bEventDeckUnlocked = false;
    this->MaximumEventsPerMap = 3;
}

