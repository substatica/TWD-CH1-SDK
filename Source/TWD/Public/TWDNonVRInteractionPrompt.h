#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRInteraction.h"
#include "InputCoreTypes.h"
#include "TWDNonVRInteractionPrompt.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDNonVRInteractionPrompt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDNonVRInteraction Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeLongPressed;
    
    FTWDNonVRInteractionPrompt();
};

