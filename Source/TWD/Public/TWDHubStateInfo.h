#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo_IntData.h"
#include "TWDHubStateInfo_BoolData.h"
#include "TWDHubStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDHubStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FTWDHubStateInfo_BoolData> BoolValues;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FTWDHubStateInfo_IntData> IntValues;
    
    TWD_API FTWDHubStateInfo();
};

