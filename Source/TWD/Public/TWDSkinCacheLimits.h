#pragma once
#include "CoreMinimal.h"
#include "TWDSkinCacheLimits.generated.h"

class USDISkinObject;

USTRUCT(BlueprintType)
struct FTWDSkinCacheLimits {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleAnywhere)
    TSoftClassPtr<USDISkinObject> Skin;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 PreAuthored;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 hair;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 head;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 Torso;
    
    UPROPERTY(Config, VisibleAnywhere)
    int32 Leg;
    
    TWD_API FTWDSkinCacheLimits();
};

