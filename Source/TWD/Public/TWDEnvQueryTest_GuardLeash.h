#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TWDEnvQueryTest_GuardLeash.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDEnvQueryTest_GuardLeash : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuardPointKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashDistanceKeyName;
    
    UTWDEnvQueryTest_GuardLeash();
};

