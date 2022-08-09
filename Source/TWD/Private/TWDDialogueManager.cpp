#include "TWDDialogueManager.h"
#include "Templates/SubclassOf.h"
#include "TWDBarkSemaphore.h"

class ATWDCharacter;
class UTWDDialogue;
class ATWDPlayerController;

void ATWDDialogueManager::UnRegisterSpecialDialogueCharacter(ATWDCharacter* CharacterToRemove) {
}

void ATWDDialogueManager::StopDialogue(TSubclassOf<UTWDDialogue> Dialogue) {
}

void ATWDDialogueManager::RegisterSpecialDialogueCharacter(ATWDCharacter* CharacterToRegister) {
}

UTWDDialogue* ATWDDialogueManager::PlayDialogue(TSubclassOf<UTWDDialogue> Dialogue, const TArray<ATWDCharacter*>& Characters, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& DialogueFinished) {
    return NULL;
}

void ATWDDialogueManager::OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted) {
}

bool ATWDDialogueManager::IsDialoguePlaying(TSubclassOf<UTWDDialogue> Dialogue) {
    return false;
}

ATWDDialogueManager::ATWDDialogueManager() {
    this->GameDirector = NULL;
    this->BarkSemaphore = CreateDefaultSubobject<UTWDBarkSemaphore>(TEXT("BarkSemaphore"));
}

