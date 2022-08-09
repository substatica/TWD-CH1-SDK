#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearm_FiringWeaponDelegate.generated.h"

class ASDIWeaponFirearmAmmo;
class AController;
class APawn;
class ASDIWeaponFirearm;
class USDIWeaponFirearmFireModeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FSDIWeaponFirearm_FiringWeapon, AController*, Controller, APawn*, Pawn, ASDIWeaponFirearm*, Firearm, USDIWeaponFirearmFireModeComponent*, Firemode, ASDIWeaponFirearmAmmo*, Ammo, int32, ShotID);

