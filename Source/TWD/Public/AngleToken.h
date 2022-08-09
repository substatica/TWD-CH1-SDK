#pragma once
#include "CoreMinimal.h"
#include "Token.h"
#include "AngleToken.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UAngleToken : public UToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LocationAngle;
    
    UAngleToken();
};

