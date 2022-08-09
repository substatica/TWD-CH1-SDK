#pragma once
#include "CoreMinimal.h"
#include "DialogueLine.h"
#include "DialogueLineFinishedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDialogueLineFinished, const FDialogueLine&, DialogueLine, bool, bCompleted);

