#pragma once
#include "CoreMinimal.h"
#include "QFloatExp.h"
#include "RFloatExp.h"
#include "FloatRandomOscillator.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FFloatRandomOscillator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    float NegativeAmplitude;
    
    UPROPERTY(Transient)
    float PositiveAmplitude;
    
    UPROPERTY(Transient)
    float Direction;
    
    UPROPERTY(Transient)
    int32 Cycles;
    
    UPROPERTY(Transient)
    double CurrentCycle;
    
    UPROPERTY(Transient)
    float CurrentValue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQFloatExp Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp Amplitude;
    
    FFloatRandomOscillator();
};

