#include "TWDDialogue.h"

class ATWDCharacter;
class ATWDPlayerController;

void UTWDDialogue::Suspend() {
}

void UTWDDialogue::Stop() {
}

void UTWDDialogue::Start() {
}

void UTWDDialogue::SetDialogueState(EDialogueState InDialogueState) {
}

void UTWDDialogue::SetBookmark(const FString& BookMark) const {
}

void UTWDDialogue::Resume() {
}

void UTWDDialogue::Restart() {
}

void UTWDDialogue::PreSuspend_Implementation() {
}

void UTWDDialogue::PreResume_Implementation() {
}


void UTWDDialogue::OnCharacterExitedDialogueRange(ATWDCharacter* Character) {
}

void UTWDDialogue::OnCharacterEnteredDialogueRange(ATWDCharacter* Character) {
}


bool UTWDDialogue::IsPlaying() const {
    return false;
}

ATWDCharacter* UTWDDialogue::GetInstigatorCharacter() const {
    return NULL;
}

ATWDPlayerController* UTWDDialogue::GetInstigator() const {
    return NULL;
}

EDialogueState UTWDDialogue::GetDialogueState() const {
    return EDialogueState::Playing;
}

TArray<ATWDCharacter*> UTWDDialogue::GetCharacters() const {
    return TArray<ATWDCharacter*>();
}

ATWDCharacter* UTWDDialogue::GetCharacter(int32 CharacterIndex) const {
    return NULL;
}

FString UTWDDialogue::GetBookmark() const {
    return TEXT("");
}

void UTWDDialogue::End() {
}

void UTWDDialogue::ClearBookmark() const {
}

UTWDDialogue::UTWDDialogue() {
    this->PreSuspendPreResumeState = EPreSuspendPreResumeState::Enabled;
    this->bCompleteOnStop = false;
    this->Instigator = NULL;
}

