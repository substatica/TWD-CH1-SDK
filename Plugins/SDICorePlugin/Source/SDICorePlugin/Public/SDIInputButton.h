#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonBase.h"
#include "SDIInputButton.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIInputButton : public FSDIInputButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PressedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReleasedTimer;
    
public:
    FSDIInputButton();
};

