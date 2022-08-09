#include "TWDSaveGame.h"

class UTWDSaveGame;

void UTWDSaveGame::WriteVerboseDescription(const FString& OutFileName) const {
}

bool UTWDSaveGame::IsSaveDirty() const {
    return false;
}

FString UTWDSaveGame::GetSaveSlotName() const {
    return TEXT("");
}

void UTWDSaveGame::CopyData(UTWDSaveGame* DataToCopy) {
}

UTWDSaveGame::UTWDSaveGame() {
    this->SaveSlotName = TEXT("TWDSaveSlot");
    this->UserIndex = 0;
    this->bSaveDirty = false;
    this->TimeInSecondsPlayed = 0.00f;
    this->CurrentRandomStreamSeed = 0;
    this->MapInitRandomStreamSeed = 0;
    this->MapInitRandomStreamMap = EMapTerritoryNodeType::None;
    this->CreationGameSaveDataVersion = 0;
    this->HasPlayerTraveledToday = true;
    this->CurrentNotebookSection = 0;
    this->StoryProgressionValue = 0;
    this->bEventDeckUnlocked = false;
    this->CurrentDay = 1;
    this->CurrentMapName = TEXT("Map_Master_GD_Tutorial");
    this->DifficultyMode = ETWDDifficultyMode::ETWDDifficulty_Med;
    this->CurrentHealth = -1.00f;
    this->CurrentStamina = -1.00f;
    this->CurrentMaxStamina = -1.00f;
    this->bStealthModeActive = false;
    this->bCompletedTutorial = false;
    this->bFavorManagerEnabled = false;
}

