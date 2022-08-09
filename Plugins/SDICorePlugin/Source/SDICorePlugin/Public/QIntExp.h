#pragma once
#include "CoreMinimal.h"
#include "QInt.h"
#include "QIntExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQIntExp : public FQInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FQIntExp();
};

