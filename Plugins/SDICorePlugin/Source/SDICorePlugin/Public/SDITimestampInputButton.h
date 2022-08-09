#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonBase.h"
#include "SDITimestampInputButton.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDITimestampInputButton : public FSDIInputButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PressedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReleasedTimestamp;
    
public:
    FSDITimestampInputButton();
};

