#pragma once
#include "CoreMinimal.h"
#include "FloatRandomOscillator.h"
#include "SDICameraSwayEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraSwayEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatRandomOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatRandomOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatRandomOscillator Roll;
    
public:
    FSDICameraSwayEntry();
};

