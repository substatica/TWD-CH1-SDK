#include "SavedLookatNotebookData.h"

FSavedLookatNotebookData::FSavedLookatNotebookData() {
    this->Category = ETWDSavedNoteCategory::BEGIN;
    this->bAllowRetrigger = false;
    this->ActorClass = NULL;
    this->CollectedTime = 0.00f;
}

