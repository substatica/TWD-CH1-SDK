#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo_BoolData.generated.h"

USTRUCT(BlueprintType)
struct FTWDHubStateInfo_BoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    TWD_API FTWDHubStateInfo_BoolData();
};

