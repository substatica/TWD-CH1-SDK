#pragma once
#include "CoreMinimal.h"
#include "BinnedObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FBinnedObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastBinChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBin;
    
    SDICOREPLUGIN_API FBinnedObjectInfo();
};

