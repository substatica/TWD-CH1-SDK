#pragma once
#include "CoreMinimal.h"
#include "DialogueFinishedEventDelegate.generated.h"

class UTWDDialogue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueFinishedEvent, UTWDDialogue*, FinishedDialogue, bool, bCompleted);

