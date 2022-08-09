#pragma once
#include "CoreMinimal.h"
#include "SuspiciousNPC.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FSuspiciousNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ATWDCharacter* NPC;
    
    UPROPERTY(BlueprintReadWrite)
    float SuspicionLevel;
    
    TWD_API FSuspiciousNPC();
};

