#pragma once
#include "CoreMinimal.h"
#include "TWDVRPlatformInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDVRPlatformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString VRPlatform;
    
    UPROPERTY(BlueprintReadWrite)
    float ColorMin;
    
    UPROPERTY(BlueprintReadWrite)
    float ColorMid;
    
    UPROPERTY(BlueprintReadWrite)
    float ColorMax;
    
    TWD_API FTWDVRPlatformInfo();
};

