#pragma once
#include "CoreMinimal.h"
#include "TWDSubsequentBark.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSubsequentBark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Event;
    
    FTWDSubsequentBark();
};

