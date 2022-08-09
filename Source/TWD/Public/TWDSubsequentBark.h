#pragma once
#include "CoreMinimal.h"
#include "TWDSubsequentBark.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSubsequentBark {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Target;
    
    UPROPERTY(EditAnywhere)
    FString Event;
    
    FTWDSubsequentBark();
};

