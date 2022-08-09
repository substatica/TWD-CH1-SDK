#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIInputStick.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIInputStick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D Cumulative;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Angle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Deflection;
    
public:
    FSDIInputStick();
};

