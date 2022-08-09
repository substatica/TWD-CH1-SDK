#pragma once
#include "CoreMinimal.h"
#include "CharacterEnteredDialogueRangeDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterEnteredDialogueRange, ATWDCharacter*, Character);

