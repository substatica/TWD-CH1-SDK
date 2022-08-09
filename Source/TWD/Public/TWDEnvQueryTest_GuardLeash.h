#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TWDEnvQueryTest_GuardLeash.generated.h"

UCLASS()
class TWD_API UTWDEnvQueryTest_GuardLeash : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName GuardPointKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName LeashDistanceKeyName;
    
    UTWDEnvQueryTest_GuardLeash();
};

