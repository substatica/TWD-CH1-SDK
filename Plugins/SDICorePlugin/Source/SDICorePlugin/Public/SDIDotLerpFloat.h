#pragma once
#include "CoreMinimal.h"
#include "SDIDotLerpFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDotLerpFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SideToReverseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SideToForwardExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAngularLerp;
    
    FSDIDotLerpFloat();
};

