#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRInteraction.h"
#include "InputCoreTypes.h"
#include "TWDNonVRInteractionPrompt.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDNonVRInteractionPrompt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ETWDNonVRInteraction Command;
    
    UPROPERTY(BlueprintReadOnly)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanBeLongPressed;
    
    FTWDNonVRInteractionPrompt();
};

