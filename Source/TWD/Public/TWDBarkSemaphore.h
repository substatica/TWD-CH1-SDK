#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDBarkSemaphore.generated.h"

class ATWDCharacter;

UCLASS()
class TWD_API UTWDBarkSemaphore : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ATWDCharacter* Speaker;
    
public:
    UTWDBarkSemaphore();
};

