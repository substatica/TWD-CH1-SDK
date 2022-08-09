#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RFloatExp.h"
#include "SDIRecoilSettings.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIRecoilSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelRotAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelTranslationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp RotAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp Duration;
    
    FSDIRecoilSettings();
};

