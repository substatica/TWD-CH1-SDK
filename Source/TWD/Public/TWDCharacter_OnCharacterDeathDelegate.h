#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDCharacter_OnCharacterDeathDelegate.generated.h"

class UDamageType;
class ATWDCharacter;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTWDCharacter_OnCharacterDeath, ATWDCharacter*, Character, float, PrevHealth, TSubclassOf<UDamageType>, DamageTypeClass, AActor*, DamageCauser);

