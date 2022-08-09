#pragma once
#include "CoreMinimal.h"
#include "DialogueStartedEventDelegate.generated.h"

class UTWDDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueStartedEvent, UTWDDialogue*, Dialogue);

