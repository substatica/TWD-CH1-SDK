#include "TWDFavorManager.h"

class UTWDSaveGame;

float UTWDFavorManager::SetLocalFavor(EMapTerritoryNodeType Territory, float NewLocalFavor, ETWDFavorReason reason) {
    return 0.0f;
}

void UTWDFavorManager::SaveToSaveData(UTWDSaveGame* SaveGame) const {
}

void UTWDFavorManager::RefreshLocalFavorTiers() {
}

int32 UTWDFavorManager::RefreshGlobalFavorTier() {
    return 0;
}

float UTWDFavorManager::RefreshGlobalFavor() {
    return 0.0f;
}




void UTWDFavorManager::LoadFromSaveData(UTWDSaveGame* SaveGame) {
}

int32 UTWDFavorManager::GetLocalFavorTierIndex(float InLocalFavor) const {
    return 0;
}

int32 UTWDFavorManager::GetLocalFavorTierCount() const {
    return 0;
}

FTWDFavorTier UTWDFavorManager::GetLocalFavorTier(int32 TierIndex) const {
    return FTWDFavorTier{};
}

float UTWDFavorManager::GetLocalFavor(EMapTerritoryNodeType Territory) const {
    return 0.0f;
}

int32 UTWDFavorManager::GetGlobalFavorTierIndex(float InGlobalFavor) const {
    return 0;
}

int32 UTWDFavorManager::GetGlobalFavorTierCount() const {
    return 0;
}

FTWDFavorTier UTWDFavorManager::GetGlobalFavorTier(int32 TierIndex) const {
    return FTWDFavorTier{};
}

float UTWDFavorManager::GetGlobalFavor() const {
    return 0.0f;
}

FTWDFavorTier UTWDFavorManager::GetCurrentLocalFavorTier(EMapTerritoryNodeType Territory) const {
    return FTWDFavorTier{};
}

FTWDFavorTier UTWDFavorManager::GetCurrentGlobalFavorTier() const {
    return FTWDFavorTier{};
}

float UTWDFavorManager::DebugSetGlobalFavor(float NewGlobalFavor) {
    return 0.0f;
}

void UTWDFavorManager::DebugLogFavor() const {
}

void UTWDFavorManager::DebugClearLocalFavor() {
}

float UTWDFavorManager::DebugAlterGlobalFavor(float GlobalFavorDelta) {
    return 0.0f;
}

float UTWDFavorManager::AlterLocalFavor(EMapTerritoryNodeType Territory, float LocalFavorDelta, ETWDFavorReason reason) {
    return 0.0f;
}

UTWDFavorManager::UTWDFavorManager() {
    this->bEnabled = false;
}

