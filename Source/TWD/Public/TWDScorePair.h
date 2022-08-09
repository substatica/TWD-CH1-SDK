#pragma once
#include "CoreMinimal.h"
#include "TWDScorePair.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDScorePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATWDCharacter> Subject;
    
    TWD_API FTWDScorePair();
};

