#pragma once
#include "CoreMinimal.h"
#include "RInt.h"
#include "RIntExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRIntExp : public FRInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Exp;
    
    FRIntExp();
};

