#pragma once
#include "CoreMinimal.h"
#include "SuspiciousNPC.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FSuspiciousNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDCharacter* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspicionLevel;
    
    TWD_API FSuspiciousNPC();
};

