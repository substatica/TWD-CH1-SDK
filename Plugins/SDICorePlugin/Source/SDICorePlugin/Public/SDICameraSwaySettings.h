#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "SDICameraSwaySettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraSwaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp PitchDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp PitchFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp YawDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp YawFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp RollDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp RollFrequency;
    
    FSDICameraSwaySettings();
};

