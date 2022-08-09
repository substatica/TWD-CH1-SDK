#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "TWDStabInterface.generated.h"

class ATWDWeaponActor;

UINTERFACE(Blueprintable)
class UTWDStabInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDStabInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool AllowStickAfterStab(ATWDWeaponActor* Weapon, const FHitResult& HitInfo) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool AllowStab(ATWDWeaponActor* Weapon, const FHitResult& HitInfo, bool bThrown) const;
    
};

