#pragma once
#include "CoreMinimal.h"
#include "TWDScorePair.generated.h"

class ATWDCharacter;

USTRUCT()
struct FTWDScorePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Score;
    
    UPROPERTY()
    TWeakObjectPtr<ATWDCharacter> Subject;
    
    TWD_API FTWDScorePair();
};

