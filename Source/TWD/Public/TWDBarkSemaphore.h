#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDBarkSemaphore.generated.h"

class ATWDCharacter;

UCLASS(Blueprintable)
class TWD_API UTWDBarkSemaphore : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* Speaker;
    
public:
    UTWDBarkSemaphore();
};

