#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_WeaponFiredDelegate.generated.h"

class ATWDCharacter;
class ATWDWeaponGun;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_WeaponFired, ATWDCharacter*, Character, ATWDWeaponGun*, Weapon);

