#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo_BoolData.generated.h"

USTRUCT(BlueprintType)
struct FTWDHubStateInfo_BoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    bool Value;
    
    TWD_API FTWDHubStateInfo_BoolData();
};

