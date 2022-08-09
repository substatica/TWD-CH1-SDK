#pragma once
#include "CoreMinimal.h"
#include "SublevelPlatformOverride.generated.h"

USTRUCT(BlueprintType)
struct FSublevelPlatformOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SublevelOverrides;
    
    TWD_API FSublevelPlatformOverride();
};

