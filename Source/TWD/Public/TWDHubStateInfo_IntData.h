#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo_IntData.generated.h"

USTRUCT(BlueprintType)
struct FTWDHubStateInfo_IntData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    TWD_API FTWDHubStateInfo_IntData();
};

