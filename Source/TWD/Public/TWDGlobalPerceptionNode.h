#pragma once
#include "CoreMinimal.h"
#include "TWDGlobalPerceptionNode.generated.h"

USTRUCT(BlueprintType)
struct FTWDGlobalPerceptionNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    TWD_API FTWDGlobalPerceptionNode();
};

