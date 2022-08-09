#pragma once
#include "CoreMinimal.h"
#include "TWDHubStateInfo.h"
#include "TWDPlayerStateInfo.h"
#include "TWDPlayerStateBackendInfo.generated.h"

USTRUCT()
struct FTWDPlayerStateBackendInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTWDHubStateInfo HubState;
    
    UPROPERTY()
    FTWDPlayerStateInfo PlayerState;
    
    TWD_API FTWDPlayerStateBackendInfo();
};

