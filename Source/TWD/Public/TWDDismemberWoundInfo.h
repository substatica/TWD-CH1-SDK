#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "TWDDismemberWoundInfo.generated.h"

USTRUCT()
struct FTWDDismemberWoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ETWDCharacterHitRegion Region;
    
    UPROPERTY(Transient)
    FName WoundBoneName;
    
    UPROPERTY(Transient)
    FVector WoundCenter;
    
    UPROPERTY(Transient)
    FVector WoundForward;
    
    UPROPERTY(Transient)
    FVector WoundUp;
    
    TWD_API FTWDDismemberWoundInfo();
};

