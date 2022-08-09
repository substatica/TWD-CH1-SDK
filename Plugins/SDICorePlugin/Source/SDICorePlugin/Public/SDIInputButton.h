#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonBase.h"
#include "SDIInputButton.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIInputButton : public FSDIInputButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float PressedTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ReleasedTimer;
    
public:
    FSDIInputButton();
};

