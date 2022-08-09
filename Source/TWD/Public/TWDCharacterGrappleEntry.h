#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.h"
#include "TWDCharacterGrappleEntry.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDCharacterGrappleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDCharacter> Other;
    
    UPROPERTY(Transient)
    ETWDCharacterGrappleLocation GrappleLocation;
    
    UPROPERTY(Transient)
    float Timestamp;
    
    TWD_API FTWDCharacterGrappleEntry();
};

