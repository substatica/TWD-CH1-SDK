#pragma once
#include "CoreMinimal.h"
#include "CharacterEnteredDialogueRangeDelegate.generated.h"

class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCharacterEnteredDialogueRange, ATWDCharacter*, Character);

