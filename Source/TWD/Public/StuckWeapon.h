#pragma once
#include "CoreMinimal.h"
#include "StuckWeapon.generated.h"

class ATWDWeaponActor;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FStuckWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<ATWDWeaponActor> StuckWeapon;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UParticleSystemComponent* StabLoopPSComp;
    
    TWD_API FStuckWeapon();
};

