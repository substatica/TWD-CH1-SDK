#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDArchetypeWeaponLoadoutChoice.generated.h"

class ASDIWeaponFirearm;

USTRUCT(BlueprintType)
struct TWD_API FTWDArchetypeWeaponLoadoutChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIWeaponFirearm> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    FTWDArchetypeWeaponLoadoutChoice();
};

