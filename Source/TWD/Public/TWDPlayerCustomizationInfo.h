#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "TWDPlayerCustomizationInfo.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDPlayerCustomizationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EGender VoiceVariant;
    
    UPROPERTY(BlueprintReadWrite)
    EGender ArmVariant;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SkinVariant;
    
    FTWDPlayerCustomizationInfo();
};

