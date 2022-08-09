#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo.h"
#include "TWDPlayerStateInfo.h"
#include "TWDPlayerStateBackendInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDPlayerStateBackendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDHubStateInfo HubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerStateInfo PlayerState;
    
    TWD_API FTWDPlayerStateBackendInfo();
};

