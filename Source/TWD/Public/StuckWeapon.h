#pragma once
#include "CoreMinimal.h"
#include "StuckWeapon.generated.h"

class ATWDWeaponActor;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FStuckWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponActor> StuckWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StabLoopPSComp;
    
    TWD_API FStuckWeapon();
};

