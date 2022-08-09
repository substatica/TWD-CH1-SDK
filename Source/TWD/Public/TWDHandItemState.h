#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "ETWDGunAction.h"
#include "TWDNonVREquipmentActionDetails.h"
#include "TWDHandItemState.generated.h"

class ASDIHeldActor;

USTRUCT(BlueprintType)
struct FTWDHandItemState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIHeldActor* PrevItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIHeldActor* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<ASDIHeldActor> PrevItemClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<ASDIHeldActor> ItemClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDestroyed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bConsume;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAimingThrow;
    
    UPROPERTY(Transient)
    bool bDesiredAttack;
    
    UPROPERTY(Transient)
    FTWDNonVRMeleeAttackDetails DesiredAttackDetails;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAttack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDNonVRMeleeAttackDetails AttackDetails;
    
    UPROPERTY(Transient)
    ETWDGunAction DesiredGunAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDGunAction GunAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GunReloadRounds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GunChamberedRounds;
    
    UPROPERTY(Transient)
    bool bDesiredEquipmentAction;
    
    UPROPERTY(Transient)
    FTWDNonVREquipmentActionDetails DesiredEquipmentActionDetails;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bEquipmentAction;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDNonVREquipmentActionDetails EquipmentActionDetails;
    
    TWD_API FTWDHandItemState();
};

