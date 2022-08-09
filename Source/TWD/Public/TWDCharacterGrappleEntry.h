#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.h"
#include "TWDCharacterGrappleEntry.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDCharacterGrappleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDCharacter> Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDCharacterGrappleLocation GrappleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    TWD_API FTWDCharacterGrappleEntry();
};

