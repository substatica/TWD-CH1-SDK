#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberWoundInfo.h"
#include "TWDDismemberedLimb.generated.h"

class ATWDDismemberLimbCap;
class ATWDDismemberDroppedLimb;

USTRUCT(BlueprintType)
struct FTWDDismemberedLimb : public FTWDDismemberWoundInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDDismemberLimbCap> LimbCap;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDDismemberDroppedLimb> DroppedLimb;
    
public:
    TWD_API FTWDDismemberedLimb();
};

