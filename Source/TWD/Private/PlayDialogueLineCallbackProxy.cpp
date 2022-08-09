#include "PlayDialogueLineCallbackProxy.h"

class UPlayDialogueLineCallbackProxy;
class UTWDDialogue;
class ATWDCharacter;

void UPlayDialogueLineCallbackProxy::OnDialogueLineSkipped() {
}

void UPlayDialogueLineCallbackProxy::OnDialogueLineFinished(const FDialogueLine& DialogueLine, bool bCompleted) {
}

UPlayDialogueLineCallbackProxy* UPlayDialogueLineCallbackProxy::CreateProxyObjectForPlayDialogueLine(UTWDDialogue* Dialogue, ATWDCharacter* Character, FDataTableRowHandle NewDialogueLineHandle, EDialogueOverlapHandlingMethod OverlapHandlingMethod) {
    return NULL;
}

UPlayDialogueLineCallbackProxy::UPlayDialogueLineCallbackProxy() {
}

