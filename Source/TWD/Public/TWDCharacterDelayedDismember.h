#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberWoundInfo.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDCharacterDelayedDismember.generated.h"

class AController;
class UTWDWeaponHitCapsuleComponent;
class ATWDWeaponActor;

USTRUCT(BlueprintType)
struct FTWDCharacterDelayedDismember : public FTWDDismemberWoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDropLimb;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AController> WeakInstigatorController;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponActor> WeakWeapon;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTWDWeaponHitCapsuleComponent> WeakDismemberCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ActorSpaceImpulseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreSeverWoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SplayDuration;
    
    TWD_API FTWDCharacterDelayedDismember();
};

