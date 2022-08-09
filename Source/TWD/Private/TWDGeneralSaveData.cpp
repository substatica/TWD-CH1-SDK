#include "TWDGeneralSaveData.h"

void UTWDGeneralSaveData::SetAnyPlayerFinishedTutorial(const bool bFinished) {
}

int32 UTWDGeneralSaveData::SaveWaveModeHighScore(const FTWDHighScoreEntry PlayData) {
    return 0;
}

bool UTWDGeneralSaveData::SaveToDrive() {
    return false;
}

void UTWDGeneralSaveData::ResetWaveModeHighScores() {
}

bool UTWDGeneralSaveData::HasAnyPlayerFinishedTutorial() const {
    return false;
}

TArray<FTWDHighScoreEntry> UTWDGeneralSaveData::GetWaveModeHighScores() const {
    return TArray<FTWDHighScoreEntry>();
}

UTWDGeneralSaveData::UTWDGeneralSaveData() {
    this->bFinishedTutorial = false;
}

