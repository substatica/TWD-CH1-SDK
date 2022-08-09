#pragma once
#include "CoreMinimal.h"
#include "DecayInt.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDecayInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* ClassReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMergeResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMergeAddDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMergeResetDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMergeResetAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FXObject;
    
    UPROPERTY(Transient)
    float Fraction;
    
    UPROPERTY(Transient)
    float Timer;
    
    SDICOREPLUGIN_API FDecayInt();
};

