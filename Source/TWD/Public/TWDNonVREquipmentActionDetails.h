#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDNonVREquipmentActionType.h"
#include "TWDNonVREquipmentActionDetails.generated.h"

class ASDIHeldActor;

USTRUCT(BlueprintType)
struct FTWDNonVREquipmentActionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIHeldActor* HeldActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<ASDIHeldActor> HeldActorClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDNonVREquipmentActionType ActionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Duration;
    
    TWD_API FTWDNonVREquipmentActionDetails();
};

