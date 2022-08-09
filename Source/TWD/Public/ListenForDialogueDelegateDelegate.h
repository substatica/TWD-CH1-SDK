#pragma once
#include "CoreMinimal.h"
#include "TWDDialogueOption.h"
#include "ListenForDialogueDelegateDelegate.generated.h"

class ATWDPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListenForDialogueDelegate, const FTWDDialogueOption&, DialogueOption, ATWDPlayerController*, Controller);

