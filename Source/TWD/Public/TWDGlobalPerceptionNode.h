#pragma once
#include "CoreMinimal.h"
#include "TWDGlobalPerceptionNode.generated.h"

USTRUCT(BlueprintType)
struct FTWDGlobalPerceptionNode {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Time;
    
    UPROPERTY(Transient)
    bool bIsSight;
    
    UPROPERTY(Transient)
    FString Desc;
    
    TWD_API FTWDGlobalPerceptionNode();
};

