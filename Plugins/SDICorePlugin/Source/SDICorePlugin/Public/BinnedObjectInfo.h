#pragma once
#include "CoreMinimal.h"
#include "BinnedObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FBinnedObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float LastBinChangeTime;
    
    UPROPERTY(Transient)
    int32 CurrentBin;
    
    SDICOREPLUGIN_API FBinnedObjectInfo();
};

