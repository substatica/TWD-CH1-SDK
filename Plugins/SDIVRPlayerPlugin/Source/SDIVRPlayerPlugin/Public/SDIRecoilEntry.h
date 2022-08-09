#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIRecoilEntry.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIRecoilEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector RotAxis;
    
    UPROPERTY(Transient)
    float RotAngle;
    
    UPROPERTY(Transient)
    FVector Translation;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    float Timer;
    
    FSDIRecoilEntry();
};

