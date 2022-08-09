#pragma once
#include "CoreMinimal.h"
#include "CharacterHealthUpdatedDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterHealthUpdated, ATWDCharacter*, Character, float, PrevHealth, float, NewHealth);

