#pragma once
#include "CoreMinimal.h"
#include "SDIPathNodeBranch.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPathNodeBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    float Weight;
    
    FSDIPathNodeBranch();
};

