#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmAmmoLauncher.h"
#include "TWDWeaponFirearmAmmoLauncher.generated.h"

UCLASS(Blueprintable)
class ATWDWeaponFirearmAmmoLauncher : public ASDIWeaponFirearmAmmoLauncher {
    GENERATED_BODY()
public:
    ATWDWeaponFirearmAmmoLauncher(const FObjectInitializer& ObjectInitializer);
};

