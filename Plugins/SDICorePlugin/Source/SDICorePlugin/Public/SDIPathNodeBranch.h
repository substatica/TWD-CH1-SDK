#pragma once
#include "CoreMinimal.h"
#include "SDIPathNodeBranch.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPathNodeBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FSDIPathNodeBranch();
};

