#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonBase.h"
#include "SDITimestampInputButton.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDITimestampInputButton : public FSDIInputButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PressedTimestamp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ReleasedTimestamp;
    
public:
    FSDITimestampInputButton();
};

