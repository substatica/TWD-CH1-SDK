#include "TWDSubtask.h"

void UTWDSubtask::Start_Implementation() {
}

void UTWDSubtask::Reset_Implementation() {
}

bool UTWDSubtask::IsResolved() const {
    return false;
}

bool UTWDSubtask::IsOptional() const {
    return false;
}

void UTWDSubtask::IncrementValue_Implementation(int32 NewIncrementValue) {
}

int32 UTWDSubtask::GetValue() {
    return 0;
}

ESubtaskState UTWDSubtask::GetState() const {
    return ESubtaskState::Hidden;
}

FText UTWDSubtask::GetDescription() const {
    return FText::GetEmpty();
}

void UTWDSubtask::Fail_Implementation() {
}

void UTWDSubtask::Complete_Implementation() {
}

UTWDSubtask::UTWDSubtask() {
    this->CompletionValue = 1;
    this->bOptional = false;
    this->bShowNotifications = true;
    this->ParentTask = NULL;
}

