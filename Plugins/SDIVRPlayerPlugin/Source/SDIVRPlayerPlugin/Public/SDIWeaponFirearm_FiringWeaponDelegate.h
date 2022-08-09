#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearm_FiringWeaponDelegate.generated.h"

class AController;
class APawn;
class ASDIWeaponFirearm;
class USDIWeaponFirearmFireModeComponent;
class ASDIWeaponFirearmAmmo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FSDIWeaponFirearm_FiringWeapon, AController*, Controller, APawn*, Pawn, ASDIWeaponFirearm*, Firearm, USDIWeaponFirearmFireModeComponent*, Firemode, ASDIWeaponFirearmAmmo*, Ammo, int32, ShotID);

