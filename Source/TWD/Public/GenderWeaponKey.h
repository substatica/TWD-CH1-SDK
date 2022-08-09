#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "EWeaponAnimation.h"
#include "GenderWeaponKey.generated.h"

USTRUCT(BlueprintType)
struct FGenderWeaponKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAnimation Weapon;
    
    TWD_API FGenderWeaponKey();
};

