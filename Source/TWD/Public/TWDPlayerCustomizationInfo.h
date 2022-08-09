#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "TWDPlayerCustomizationInfo.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDPlayerCustomizationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender VoiceVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender ArmVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinVariant;
    
    FTWDPlayerCustomizationInfo();
};

