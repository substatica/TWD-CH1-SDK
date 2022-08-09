#pragma once
#include "CoreMinimal.h"
#include "CharacterExitedDialogueRangeDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterExitedDialogueRange, ATWDCharacter*, Character);

