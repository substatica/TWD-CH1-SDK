#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonPressedSignatureDelegate.h"
#include "SDIInputButtonReleasedSignatureDelegate.h"
#include "SDIInputButtonBase.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIInputButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DoubleTapPressTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DoubleTapReleaseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LongHoldTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bHeld;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDoubleTap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DoubleTapPressedTimer;
    
    UPROPERTY(Transient)
    TArray<FSDIInputButtonPressedSignature> OnPressed;
    
    UPROPERTY(Transient)
    TArray<FSDIInputButtonReleasedSignature> OnReleased;
    
public:
    FSDIInputButtonBase();
};

