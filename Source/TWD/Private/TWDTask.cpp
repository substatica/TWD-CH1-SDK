#include "TWDTask.h"
#include "Templates/SubclassOf.h"

class UTWDSubtask;

void UTWDTask::UpdateSubtask(TSubclassOf<UTWDSubtask> Subtask, ETaskResult& Result) {
}

void UTWDTask::Start_Implementation() {
}


bool UTWDTask::IsActive() const {
    return false;
}

FText UTWDTask::GetTitle() const {
    return FText::GetEmpty();
}

TArray<UTWDSubtask*> UTWDTask::GetSubtasksSorted() const {
    return TArray<UTWDSubtask*>();
}

TArray<UTWDSubtask*> UTWDTask::GetSubtasks() const {
    return TArray<UTWDSubtask*>();
}

UTWDSubtask* UTWDTask::GetSubtask(TSubclassOf<UTWDSubtask> Subtask) {
    return NULL;
}

FText UTWDTask::GetDescription() const {
    return FText::GetEmpty();
}

void UTWDTask::Fail_Implementation() {
}

void UTWDTask::Complete_Implementation() {
}

bool UTWDTask::AreSubtasksCompleted(TArray<TSubclassOf<UTWDSubtask>> InSubtasks) {
    return false;
}

UTWDTask::UTWDTask() {
    this->CurrentStatusIcon = ETWDTaskStatusIcon::New;
    this->LastUpdatedTime = -1.00f;
    this->bAllowNotifications = true;
}

