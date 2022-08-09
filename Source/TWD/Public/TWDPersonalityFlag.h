#pragma once
#include "CoreMinimal.h"
#include "TWDPersonalityFlag.generated.h"

USTRUCT(BlueprintType)
struct FTWDPersonalityFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSet;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsSetKnown;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeKnown;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCurrentlySet;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeCurrentlySet;
    
    TWD_API FTWDPersonalityFlag();
};

