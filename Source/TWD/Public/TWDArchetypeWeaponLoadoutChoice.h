#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDArchetypeWeaponLoadoutChoice.generated.h"

class ASDIWeaponFirearm;

USTRUCT(BlueprintType)
struct TWD_API FTWDArchetypeWeaponLoadoutChoice {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIWeaponFirearm> WeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Chance;
    
    FTWDArchetypeWeaponLoadoutChoice();
};

