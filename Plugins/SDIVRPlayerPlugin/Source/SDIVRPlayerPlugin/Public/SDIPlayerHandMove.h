#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerHandMove.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIPlayerHandMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Factor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FactorExp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvgTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinOffsetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendLerp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAcc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckAgainstOffsetDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NonVRInputButtonTime;
    
    FSDIPlayerHandMove();
};

