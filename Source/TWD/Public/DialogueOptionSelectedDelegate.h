#pragma once
#include "CoreMinimal.h"
#include "TWDDialogueOption.h"
#include "DialogueOptionSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDialogueOptionSelected, const FTWDDialogueOption&, DialogueOption);

