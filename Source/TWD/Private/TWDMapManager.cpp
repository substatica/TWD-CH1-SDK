#include "TWDMapManager.h"

class UTWDSaveGame;

void UTWDMapManager::UnlockAllNodes() {
}

void UTWDMapManager::UnlockAdjacentNodes() {
}

void UTWDMapManager::TravelToMap(FName MapName) {
}

void UTWDMapManager::SetupInitialSaveGameData(UTWDSaveGame* NewSaveGame) {
}

void UTWDMapManager::SetNodeExplorationStatus(int32 NodeIndex, EMapTerritoryNodeStatus NewStatus) {
}

void UTWDMapManager::SetCurrentNode(int32 NewNodeIndex) {
}

void UTWDMapManager::SaveMapDataToGameProgression(UTWDSaveGame* SaveGame) {
}

void UTWDMapManager::RemoveAttributeOnNodeByType(EMapTerritoryNodeType NodeType, ETWDWorldEventType AttributeType) {
}

void UTWDMapManager::RemoveAttributeOnNode(int32 NodeIndex, ETWDWorldEventType AttributeType) {
}

void UTWDMapManager::LoadFromSaveData(UTWDSaveGame* SaveGame) {
}

bool UTWDMapManager::IsNightLevelSkiffTravelAllowed() const {
    return false;
}

bool UTWDMapManager::IsNightLevel() const {
    return false;
}

bool UTWDMapManager::IsInHubLevel() const {
    return false;
}

bool UTWDMapManager::HandleNodeClickedEvent(int32 NodeIndex) {
    return false;
}

bool UTWDMapManager::HandleHubClickedEvent() {
    return false;
}

FName UTWDMapManager::GetUMAPName(EMapTerritoryNodeType MapEnum) const {
    return NAME_None;
}

EMapTerritoryNodeType UTWDMapManager::GetTerritoryTypeByName(FName MapName) const {
    return EMapTerritoryNodeType::None;
}

EMapTerritoryNodeType UTWDMapManager::GetTerritoryTypeByIndex(int32 NodeIndex) {
    return EMapTerritoryNodeType::None;
}

int32 UTWDMapManager::GetTerritoryIndexByType(EMapTerritoryNodeType NodeType) {
    return 0;
}

EMapTerritoryNodeStatus UTWDMapManager::GetNodeExplorationStatus(int32 NodeIndex) {
    return EMapTerritoryNodeStatus::Locked;
}

FText UTWDMapManager::GetMapDisplayName(FName LevelName) const {
    return FText::GetEmpty();
}

FName UTWDMapManager::GetLightScenarioName() const {
    return NAME_None;
}

EMapTerritoryNodeType UTWDMapManager::GetCurrentMapTerritoryType() const {
    return EMapTerritoryNodeType::None;
}

TArray<FMapTerritoryAttribute> UTWDMapManager::GetAttributesOfNode(int32 NodeIndex) {
    return TArray<FMapTerritoryAttribute>();
}

void UTWDMapManager::AdvanceMapValuesByOneDay() {
}

void UTWDMapManager::AddAttributesToNodeByType(EMapTerritoryNodeType NodeType, TArray<FMapTerritoryAttribute> NewAttributes) {
}

void UTWDMapManager::AddAttributesToNode(int32 NodeIndex, TArray<FMapTerritoryAttribute> NewAttributes) {
}

UTWDMapManager::UTWDMapManager() {
    this->CurrentNode = -1;
    this->PreviousNode = -1;
    this->HasPlayerTraveledToday = true;
    this->IsMapInitialized = false;
    this->HubDataAsset = NULL;
    this->PrologueDataAsset = NULL;
    this->TutorialDataAsset = NULL;
}

