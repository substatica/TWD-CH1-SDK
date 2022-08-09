#pragma once
#include "CoreMinimal.h"
#include "TWDInitialContext.generated.h"

USTRUCT(BlueprintType)
struct FTWDInitialContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, bool> Bools;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int32> Ints;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, float> Floats;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> Strings;
    
    TWD_API FTWDInitialContext();
};

