#include "ListenForDialogueCallbackProxy.h"

class ATWDCharacter;
class UTWDDialogue;
class UListenForDialogueCallbackProxy;

void UListenForDialogueCallbackProxy::OnListenExpired() {
}

void UListenForDialogueCallbackProxy::OnDialogueReceived(const FTWDDialogueOption& DialogueOption, ATWDCharacter* Instigator) {
}

UListenForDialogueCallbackProxy* UListenForDialogueCallbackProxy::CreateProxyObjectForListenForDialogue(int32 NodeId, UTWDDialogue* Dialogue, ATWDCharacter* Character, TArray<FDataTableRowHandle> NewOptionHandles, float Duration) {
    return NULL;
}

UListenForDialogueCallbackProxy::UListenForDialogueCallbackProxy() {
}

