#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberWoundInfo.h"
#include "TWDDismemberedLimb.generated.h"

class ATWDDismemberDroppedLimb;
class ATWDDismemberLimbCap;

USTRUCT(BlueprintType)
struct FTWDDismemberedLimb : public FTWDDismemberWoundInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    float Timestamp;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDDismemberLimbCap> LimbCap;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDDismemberDroppedLimb> DroppedLimb;
    
public:
    TWD_API FTWDDismemberedLimb();
};

