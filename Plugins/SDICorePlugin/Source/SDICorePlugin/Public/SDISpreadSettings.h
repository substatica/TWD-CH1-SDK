#pragma once
#include "CoreMinimal.h"
#include "ESDISpreadPattern.h"
#include "RFloatExp.h"
#include "UObject/NoExportTypes.h"
#include "SDISpreadSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDISpreadSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESDISpreadPattern SpreadPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp SpreadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp SpreadPatternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp SecondarySpreadPatternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpreadIncPerRoundFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpreadIncPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxShotSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> FixedSpreadAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedSpreadMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReverse;
    
public:
    FSDISpreadSettings();
};

